#!/usr/bin/env python3
"""List standalone C examples without depending on Git or shell utilities."""

from __future__ import annotations

from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
LANGUAGES = ("en", "tr")
IGNORED_DIRECTORY_NAMES = {
    ".git",
    ".idea",
    "build",
    "cmake-build-debug",
    "cmake-build-release",
    "output",
    "scratch",
    "tmp",
    "tools",
}
MODULAR_PROJECTS = {
    Path("en/projects/library_management_modular"),
    Path("tr/projects/library_management_modular"),
}


def discover_sources(root: Path = ROOT) -> list[Path]:
    """Return deterministic repository-relative paths for standalone examples."""
    sources: list[Path] = []

    for language in LANGUAGES:
        language_root = root / language
        for source in language_root.rglob("*.c"):
            relative = source.relative_to(root)
            if any(part in IGNORED_DIRECTORY_NAMES for part in relative.parts):
                continue
            if any(relative.is_relative_to(project) for project in MODULAR_PROJECTS):
                continue
            sources.append(relative)

    return sorted(sources, key=lambda path: path.as_posix())


def main() -> int:
    sources = discover_sources()
    paths_with_whitespace = [path for path in sources if any(char.isspace() for char in path.as_posix())]
    if paths_with_whitespace:
        formatted = ", ".join(path.as_posix() for path in paths_with_whitespace)
        raise SystemExit(f"C source paths must not contain whitespace: {formatted}")

    print("\n".join(path.as_posix() for path in sources))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
