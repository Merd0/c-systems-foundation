# Code Style

The goal of this repository is not only to show valid C syntax. Each example
should teach habits that transfer to real work: clear naming, explicit error
handling, readable functions, and safe memory ownership.

## Naming

- Prefer English identifiers in new examples in both tracks so the code vocabulary transfers to documentation and APIs.
- Keep existing Turkish identifiers when their localization has clear teaching value; update both language counterparts deliberately.
- Use `snake_case` for functions and variables in new examples.
- Use uppercase names for constants and macros.
- Prefer descriptive names over abbreviations.

## Function Design

- Keep functions small and focused.
- Validate pointer parameters before dereferencing them.
- Prefer returning a status value when an operation can fail.
- Avoid mixing input/output code with core logic when an example grows beyond a
  small demonstration.

## Input Handling

- Check the return value of `scanf` and `fscanf`.
- Prefer `fgets` plus parsing for non-trivial user input.
- Always bound string reads by the destination buffer size.
- Keep buffer cleanup visible when mixing numeric input and line input.

## Memory Safety

- Check `malloc`, `calloc`, and `realloc` results before using them.
- Document which function owns allocated memory and which function frees it.
- Set pointers to `NULL` after `free` when the pointer remains in scope.
- Avoid returning pointers to local stack variables.
- Teach both the wrong pattern and the corrected pattern when the topic is
  safety-critical.

## Formatting

- Use braces for multi-line blocks.
- Avoid dense one-line algorithms in learning material.
- Keep comments short and useful. Explain intent, pitfalls, or non-obvious C
  behavior; do not narrate every line.

## Topic Quality Bar

A strong topic folder should include:

- A `README.md` that explains the concept deeply.
- Small runnable examples.
- Common mistakes and corrected versions.
- Exercises that force the reader to modify code.
- A real-world usage note.

## Project Quality Bar

A project folder should go beyond a standalone example when it is meant to show
workplace readiness:

- Keep public declarations in `include/`.
- Keep implementation files in `src/`.
- Keep behavior checks in `tests/`.
- Provide a local `Makefile`.
- Separate business logic from input/output when possible.
- Make failure states visible through return values.
