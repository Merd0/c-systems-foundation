# Repository Structure

This document explains where content belongs and why the repository keeps two language trees.

## Navigation Model

```text
Root README
  -> language learning path
    -> topic guide or runnable source
      -> exercise, project, or LeetCode practice
```

The learning path owns sequence and completion criteria. Topic pages teach and index a concept. The reference indexes answer quick lookup questions. `STUDY_TRACKER.md` records progress without repeating lesson content.

## Directory Roles

| Path | Responsibility |
| --- | --- |
| `en/` | English explanations, examples, and projects |
| `tr/` | Turkish explanations, localized examples, and projects |
| `docs/` | Language-neutral maintenance and navigation guides |
| `scripts/` | Dependency-free source discovery and repository validation |
| `build/` | Generated binaries; never committed |

## Why The C Trees Remain Parallel

All 70 English C paths have a Turkish counterpart. Only eight pairs are byte-for-byte identical; the other pairs localize identifiers, output, comments, or teaching context. Consolidating them blindly would remove useful Turkish learning material and make one language depend on the other.

New examples should use English identifiers when practical, but an existing localized pair should only be consolidated after a semantic review proves that both files teach and behave the same way. When one language changes, compare and update its counterpart in the same change or document why they intentionally differ.

## Logical Modules

The 12 numbered levels in each learning path are the module system. The physical source folders remain topic based so examples can be found by concept without creating one-file wrapper directories. This preserves the verified 75-step order while avoiding a disruptive move of working source and project paths.

## Document Ownership

- `README.md` and `README_TR.md`: repository purpose and entry points
- `en/LEARNING_PATH.md` and `tr/LEARNING_PATH.md`: ordered 75-step curriculum
- `docs/topic-index.md`: topic-based browsing
- `en/REFERENCE_INDEX.md` and `tr/REFERENCE_INDEX.md`: quick lookup
- `STUDY_TRACKER.md`: user-controlled progress only
- Topic `README.md` files: concept explanation, examples, pitfalls, and exercises
- Project `README.md` files: project-specific build, structure, and tests
