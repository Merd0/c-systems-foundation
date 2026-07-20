# C Systems Foundation

English | [Türkçe](README_TR.md)

A structured personal learning repository for building practical C and systems-programming foundations through runnable examples, focused references, and small projects.

[Start Learning](en/LEARNING_PATH.md) | [Browse Topics](docs/topic-index.md) | [View Projects](#projects) | [Resume Study](STUDY_TRACKER.md) | [Türkçe](README_TR.md)

## What This Repository Offers

- Parallel English and Turkish learning tracks under `en/` and `tr/`.
- A verified 75-step path from build basics to pointers, ownership, data structures, file I/O, bitwise work, and projects.
- Small C11 programs that can be compiled independently.
- Deeper references for memory, structs, unions, parsing, callbacks, and modular C APIs.
- Three stages of a library-management exercise: single-file CLI, file persistence, and a tested modular version.

## Start Here

1. Choose the [English learning path](en/LEARNING_PATH.md) or [Turkish learning path](tr/LEARNING_PATH.md).
2. Open each linked source directly, predict its behavior, then compile and modify it.
3. Use the completion criterion in the learning path before moving forward.
4. Mark your progress in [STUDY_TRACKER.md](STUDY_TRACKER.md).

For quick lookup, use the [topic index](docs/topic-index.md), [English reference index](en/REFERENCE_INDEX.md), or [Turkish reference index](tr/REFERENCE_INDEX.md).

## Learning Path

| Level | Focus |
| --- | --- |
| 00 | Tooling, build, run, and debugging |
| 01 | C fundamentals, input/output, and operators |
| 02 | Control flow and loops |
| 03 | Arrays, strings, functions, and headers |
| 04 | Pointers and function interfaces |
| 05 | Structs, unions, layout, and tagged data |
| 06 | Dynamic memory, lifetime, and ownership |
| 07 | Dynamic arrays and linked data structures |
| 08 | Callbacks, errors, parsing, and modular APIs |
| 09 | Files, preprocessor, and bitwise operations |
| 10 | Algorithms, applied exercises, and projects |
| 11 | LeetCode practice bridge |

The logical levels organize the study sequence while the language folders keep localized examples and explanations easy to find.

## Applied Highlights

- Pointer arithmetic, `const` contracts, and dangling-pointer warnings
- Struct padding, tagged unions, and protocol-style messages
- `malloc`, `calloc`, `realloc`, ownership transfer, and cleanup
- Dynamic arrays, singly/doubly linked lists, and intrusive lists
- Callback tables, status-code APIs, safe token parsing, and opaque handles
- Text and binary records, macros, flags, masks, and bit packing

## Projects

| Project | English | Turkish | Focus |
| --- | --- | --- | --- |
| Library CLI | [Source](en/projects/library_management_cli.c) | [Kaynak](tr/projects/library_management_cli.c) | Menu flow, struct arrays, input validation |
| File persistence | [Source](en/projects/library_management_file_persist.c) | [Kaynak](tr/projects/library_management_file_persist.c) | Durable records and file handling |
| Modular library | [Project](en/projects/library_management_modular/README.md) | [Proje](tr/projects/library_management_modular/README.md) | `include/`, `src/`, tests, and a local Makefile |

## Build And Test

The root Makefile discovers C sources directly from the filesystem, compiles standalone examples with C11 and strict warnings, then builds and tests both modular project variants. Discovery works in a Git clone, a downloaded ZIP, and before a new example is tracked by Git.

```sh
make clean
make all
make test
python3 scripts/validate_repository.py
```

See the [build guide](docs/build-guide.md) for compiler and Windows notes. On Windows, `py -3` can be used instead of `python3`. CI runs the same build, test, and repository-structure validation.

## Repository Structure

```text
.
|-- en/                     English lessons, examples, and projects
|-- tr/                     Turkish lessons, examples, and projects
|-- docs/                   Build, style, structure, and topic guides
|-- scripts/                Lightweight repository validation
|-- STUDY_TRACKER.md        Personal progress checklist
|-- Makefile                Full build and modular test entry point
`-- README_TR.md            Turkish repository home
```

The code trees remain parallel because most paired files contain localized identifiers, output, or teaching context; they are not interchangeable copies. The rationale and maintenance rules are documented in [repository structure](docs/repository-structure.md).

## Continue With Algorithms

After the relevant C foundation, move to [Merd0/leetcode-c-solutions](https://github.com/Merd0/leetcode-c-solutions) for focused algorithm practice. The [LeetCode bridge](en/notes/leetcode_bridge.md) maps C topics to selected problems.

## Project Status

This is an ongoing learning archive. Examples and documentation are expected to grow while existing build and validation checks remain green.
