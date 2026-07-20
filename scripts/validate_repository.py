#!/usr/bin/env python3
"""Validate curriculum, source parity, documentation links, and encoding."""

from __future__ import annotations

import os
import re
import sys
from collections import Counter
from pathlib import Path
from urllib.parse import unquote

sys.dont_write_bytecode = True

from list_c_sources import MODULAR_PROJECTS, discover_sources


ROOT = Path(__file__).resolve().parents[1]
IGNORED_PARTS = {".git", ".idea", "build", "output", "scratch", "tmp", "tools"}
TEXT_SUFFIXES = {".c", ".h", ".md", ".py", ".yml", ".yaml"}
REQUIRED_FILES = {
    "README.md",
    "README_TR.md",
    "STUDY_TRACKER.md",
    "en/README.md",
    "tr/README.md",
    "en/LEARNING_PATH.md",
    "tr/LEARNING_PATH.md",
    "docs/topic-index.md",
    "docs/repository-structure.md",
    "docs/adding-content.md",
    "docs/build-guide.md",
    "docs/code-style.md",
}
ROOT_README_DESTINATIONS = {
    "README_TR.md",
    "en/LEARNING_PATH.md",
    "tr/LEARNING_PATH.md",
    "docs/topic-index.md",
    "STUDY_TRACKER.md",
}

LINK_RE = re.compile(r"!?\[[^\]]*\]\(([^)]*)\)")
LESSON_ROW_RE = re.compile(
    r"^\|\s*(\d+)\s*\|\s*\[([^]]+)]\(([^)]+)\)\s*\|\s*([^|]+?)\s*\|\s*([^|]+?)\s*\|\s*$",
    re.MULTILINE,
)
TRACKER_RE = re.compile(
    r"^- \[([ xX])\] `([0-9]{3})` \[[^]]+]\(([^)]+)\)\s*$", re.MULTILINE
)
HEADING_RE = re.compile(r"^#{1,6}\s+(.+?)\s*$", re.MULTILINE)
MOJIBAKE_MARKERS = (
    "\ufffd",
    "\u00c3",
    "\u00c2",
    "\u00c4\u00b0",
    "\u00c5",
    "\u00e2\u20ac",
)


def repository_files() -> list[Path]:
    files: list[Path] = []
    for path in ROOT.rglob("*"):
        if not path.is_file() or any(part in IGNORED_PARTS for part in path.relative_to(ROOT).parts):
            continue
        files.append(path)
    return sorted(files)


def normalize_local_target(source: Path, target: str) -> tuple[Path | None, str]:
    path_part = unquote(target.split("#", 1)[0])
    if not path_part:
        return source, ""

    candidate = Path(os.path.normpath(source.parent / path_part))
    try:
        relative = candidate.relative_to(ROOT)
    except ValueError:
        return None, path_part
    return ROOT / relative, relative.as_posix()


def has_exact_case(relative_path: str) -> bool:
    current = ROOT
    for part in Path(relative_path).parts:
        if not current.is_dir():
            return False
        matches = [child.name for child in current.iterdir() if child.name.lower() == part.lower()]
        if part not in matches:
            return False
        current /= part
    return True


def heading_anchor(heading: str) -> str:
    heading = re.sub(r"[`*_~]", "", heading.strip().lower())
    heading = re.sub(r"[^\w\- ]", "", heading, flags=re.UNICODE)
    return re.sub(r"\s+", "-", heading)


def anchor_exists(path: Path, anchor: str) -> bool:
    if not anchor or path.suffix.lower() != ".md":
        return True
    anchors: Counter[str] = Counter()
    for heading in HEADING_RE.findall(path.read_text(encoding="utf-8")):
        base = heading_anchor(heading)
        occurrence = anchors[base]
        anchors[base] += 1
        actual = base if occurrence == 0 else f"{base}-{occurrence}"
        if actual == unquote(anchor).lower():
            return True
    return False


def validate_required_files() -> list[str]:
    return [f"missing required file: {path}" for path in sorted(REQUIRED_FILES) if not (ROOT / path).is_file()]


def validate_links(markdown_files: list[Path]) -> tuple[list[str], dict[str, int]]:
    errors: list[str] = []
    counts = {"empty": 0, "study": 0, "missing": 0}

    for source in markdown_files:
        text = source.read_text(encoding="utf-8")
        relative_source = source.relative_to(ROOT)

        if re.search(r"C:[/\\]Users[/\\]", text, flags=re.IGNORECASE) or "file://" in text.lower():
            errors.append(f"local filesystem path in Markdown: {relative_source}")

        for raw_target in LINK_RE.findall(text):
            target = raw_target.strip().split(maxsplit=1)[0].strip("<>") if raw_target.strip() else ""
            if not target:
                counts["empty"] += 1
                errors.append(f"empty Markdown link: {relative_source}")
                continue
            if "\\" in target:
                errors.append(f"backslash in Markdown link: {relative_source} -> {target}")
            if re.search(r"(^|/)study/", target, flags=re.IGNORECASE):
                counts["study"] += 1
                errors.append(f"reference to removed study page: {relative_source} -> {target}")
            if target.startswith(("http://", "https://", "mailto:")):
                continue

            path, relative_target = normalize_local_target(source, target)
            if path is None or not path.exists():
                counts["missing"] += 1
                errors.append(f"broken link: {relative_source} -> {target}")
                continue
            if relative_target and not has_exact_case(relative_target):
                errors.append(f"link path has incorrect letter case: {relative_source} -> {target}")
            if "#" in target and not anchor_exists(path, target.split("#", 1)[1]):
                errors.append(f"missing Markdown anchor: {relative_source} -> {target}")

    return errors, counts


def parse_learning_path(language: str) -> tuple[list[tuple[int, str, str, str, str]], list[str]]:
    path = ROOT / language / "LEARNING_PATH.md"
    errors: list[str] = []
    rows = [
        (int(step), title.strip(), target.strip(), focus.strip(), done.strip())
        for step, title, target, focus, done in LESSON_ROW_RE.findall(path.read_text(encoding="utf-8"))
    ]

    expected = list(range(1, 76))
    steps = [row[0] for row in rows]
    if steps != expected:
        errors.append(f"{path.relative_to(ROOT)} must contain ordered steps 1..75 exactly once")

    for step, title, target, focus, done in rows:
        if not title or not focus or not done:
            errors.append(f"incomplete lesson metadata: {language} step {step}")
        resolved, _ = normalize_local_target(path, target)
        if resolved is None or not resolved.is_file():
            errors.append(f"missing lesson target: {language} step {step} -> {target}")
        target_parts = Path(unquote(target.split("#", 1)[0])).parts
        other_language = "tr" if language == "en" else "en"
        if other_language in target_parts:
            errors.append(f"lesson points to the wrong language tree: {language} step {step}")
        if "study" in target_parts:
            errors.append(f"lesson points to removed study page: {language} step {step}")

    if (ROOT / language / "study").exists():
        errors.append(f"obsolete intermediary directory still exists: {language}/study")
    return rows, errors


def validate_curriculum() -> tuple[list[str], dict[str, int]]:
    errors: list[str] = []
    en_rows, en_errors = parse_learning_path("en")
    tr_rows, tr_errors = parse_learning_path("tr")
    errors.extend(en_errors)
    errors.extend(tr_errors)

    all_ids = [row[0] for row in en_rows] + [row[0] for row in tr_rows]
    duplicate_count = sum(count - 2 for count in Counter(all_ids).values() if count > 2)
    if duplicate_count:
        errors.append(f"duplicate lesson IDs: {duplicate_count}")

    tracker_text = (ROOT / "STUDY_TRACKER.md").read_text(encoding="utf-8")
    tracker_rows = TRACKER_RE.findall(tracker_text)
    tracker_ids = [int(identifier) for _, identifier, _ in tracker_rows]
    if tracker_ids != list(range(1, 76)):
        errors.append("STUDY_TRACKER.md must contain IDs 001..075 exactly once")
    if any(mark.strip() for mark, _, _ in tracker_rows):
        errors.append("STUDY_TRACKER.md must begin with every checkbox empty")

    tr_targets = {step: target for step, _, target, _, _ in tr_rows}
    tracker_path = ROOT / "STUDY_TRACKER.md"
    for mark, identifier, target in tracker_rows:
        del mark
        step = int(identifier)
        resolved, _ = normalize_local_target(tracker_path, target)
        lesson_resolved, _ = normalize_local_target(ROOT / "tr/LEARNING_PATH.md", tr_targets.get(step, ""))
        if resolved != lesson_resolved:
            errors.append(f"tracker target differs from Turkish lesson {step}: {target}")

    return errors, {
        "en_lessons": len(en_rows),
        "tr_lessons": len(tr_rows),
        "duplicate_ids": duplicate_count,
        "missing_targets": sum("missing lesson target" in error for error in errors),
    }


def validate_root_navigation() -> list[str]:
    errors: list[str] = []
    root_text = (ROOT / "README.md").read_text(encoding="utf-8")
    targets = {
        raw.strip().split(maxsplit=1)[0].strip("<>").split("#", 1)[0]
        for raw in LINK_RE.findall(root_text)
        if raw.strip()
    }
    for expected in sorted(ROOT_README_DESTINATIONS - targets):
        errors.append(f"root README does not link to required destination: {expected}")
    return errors


def validate_sources() -> tuple[list[str], dict[str, int]]:
    errors: list[str] = []
    en_sources = {path.relative_to(ROOT / "en") for path in (ROOT / "en").rglob("*.c")}
    tr_sources = {path.relative_to(ROOT / "tr") for path in (ROOT / "tr").rglob("*.c")}
    if en_sources != tr_sources:
        for path in sorted(en_sources - tr_sources):
            errors.append(f"missing Turkish counterpart: {path.as_posix()}")
        for path in sorted(tr_sources - en_sources):
            errors.append(f"missing English counterpart: {path.as_posix()}")
    if len(en_sources) != 70 or len(tr_sources) != 70:
        errors.append(f"expected 70 C sources per language, found EN={len(en_sources)} TR={len(tr_sources)}")

    identical = sum((ROOT / "en" / path).read_bytes() == (ROOT / "tr" / path).read_bytes() for path in en_sources & tr_sources)
    if identical != 8:
        errors.append(f"expected 8 byte-identical EN/TR pairs, found {identical}")

    standalone = discover_sources(ROOT)
    if len(standalone) != 134:
        errors.append(f"expected 134 standalone C examples, found {len(standalone)}")
    for source in standalone:
        if any(char.isspace() for char in source.as_posix()):
            errors.append(f"C source path contains whitespace unsupported by Make: {source.as_posix()}")
        if any(source.is_relative_to(project) for project in MODULAR_PROJECTS):
            errors.append(f"modular source included as standalone: {source.as_posix()}")

    return errors, {
        "en_sources": len(en_sources),
        "tr_sources": len(tr_sources),
        "identical_pairs": identical,
        "different_pairs": len(en_sources & tr_sources) - identical,
        "standalone": len(standalone),
    }


def validate_encoding(files: list[Path]) -> list[str]:
    errors: list[str] = []
    for path in files:
        if path.suffix.lower() not in TEXT_SUFFIXES and path.name != "Makefile":
            continue
        data = path.read_bytes()
        relative = path.relative_to(ROOT)
        if data.startswith(b"\xef\xbb\xbf"):
            errors.append(f"UTF-8 BOM found: {relative}")
        without_crlf = data.replace(b"\r\n", b"")
        if b"\r" in without_crlf or (b"\r\n" in data and b"\n" in without_crlf):
            errors.append(f"mixed or invalid line endings: {relative}")
        try:
            text = data.decode("utf-8")
        except UnicodeDecodeError as exc:
            errors.append(f"invalid UTF-8: {relative} ({exc})")
            continue
        if any(marker in text for marker in MOJIBAKE_MARKERS):
            errors.append(f"possible mojibake text: {relative}")
    return errors


def main() -> int:
    files = repository_files()
    markdown_files = [path for path in files if path.suffix.lower() == ".md"]
    errors: list[str] = []

    errors.extend(validate_required_files())
    link_errors, link_counts = validate_links(markdown_files)
    errors.extend(link_errors)
    curriculum_errors, curriculum = validate_curriculum()
    errors.extend(curriculum_errors)
    errors.extend(validate_root_navigation())
    source_errors, sources = validate_sources()
    errors.extend(source_errors)
    errors.extend(validate_encoding(files))

    if errors:
        for error in errors:
            print(f"ERROR: {error}")
        return 1

    print(f"{curriculum['en_lessons']}/75 English lessons valid")
    print(f"{curriculum['tr_lessons']}/75 Turkish lessons valid")
    print(f"{curriculum['duplicate_ids']} duplicate lesson IDs")
    print(f"{curriculum['missing_targets']} missing lesson targets")
    print(f"{link_counts['study']} references to removed study pages")
    print(f"{link_counts['empty']} empty Markdown links")
    print(f"0 broken internal links across {len(markdown_files)} Markdown files")
    print("Tracker aligned with 75 empty lesson checkboxes")
    print(
        f"EN/TR sources: {sources['en_sources']}/{sources['tr_sources']} "
        f"({sources['identical_pairs']} identical, {sources['different_pairs']} localized)"
    )
    print(f"{sources['standalone']} standalone C examples discovered without Git")
    print("Repository validation passed")
    return 0


if __name__ == "__main__":
    sys.exit(main())
