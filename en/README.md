# C Learning Repository (English)

## Goal
This track helps you learn C from fundamentals to mini-projects with a practical
workflow: theory + runnable example + applied scenario.

## Learning Approach
1. Follow `en/LEARNING_PATH.md` in order.
2. Compile and run each file.
3. Predict output before running.
4. Modify examples and test your own variants.
5. Use notes and debugging examples to fix mistakes.
6. Use topic `README.md` files as deeper reference pages.

## Topics Covered
- fundamentals, input/output, operators
- control flow, loops, arrays
- functions, headers, pointers, structs
- unions, memory management, file I/O
- preprocessor and bitwise operations
- algorithms, problem solving, projects

## Practical Focus
This repository teaches not only syntax but also coding habits used in real work:
- input validation
- readable function design
- memory safety checks
- file persistence patterns
- algorithmic thinking

## Quality Baseline
- Build all examples with `make all`.
- Run modular project tests with `make test`.
- Read [`../docs/build-guide.md`](../docs/build-guide.md) for compiler setup.
- Read [`../docs/code-style.md`](../docs/code-style.md) before adding examples.
- Use [`../docs/topic-template.md`](../docs/topic-template.md) when expanding a topic.

## Deep-Dive Topics
These folders are intended to become complete reference sections, not only
example dumps:

- `pointers/`
- `structs/`
- `unions/`
- `memory_management/`
- `file_io/`
- `preprocessor/`
- `bitwise/`

## Production-Style Practice
The `projects/library_management_modular/` folder shows a small project split
into `include/`, `src/`, and `tests/`, with a local Makefile and assert-based
tests.
