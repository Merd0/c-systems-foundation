# Modular Library Management Project

This project is a more professional version of the single-file library examples.
It separates public declarations, implementation, application code, and tests.

## Structure

```text
library_management_modular/
  include/library.h
  src/library.c
  src/main.c
  tests/test_library.c
  Makefile
```

## Why This Matters

Single-file examples are useful for learning syntax. Real projects usually need
clearer ownership boundaries:

- `include/library.h`: public API and data types
- `src/library.c`: business logic
- `src/main.c`: user-facing application flow
- `tests/test_library.c`: focused tests for core behavior

## Build

```sh
make
```

## Test

```sh
make test
```

## Concepts Practiced

- header/source separation
- small public API design
- struct-based state
- bounded string copying
- status-returning functions
- `assert`-based tests

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../../LEARNING_PATH.md) | [Next: leetcode_bridge.md](../../notes/leetcode_bridge.md) |
