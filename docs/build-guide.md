# Build Guide

This repository is organized as many small, standalone C examples. Each `.c`
file is expected to compile independently unless its folder documentation says
otherwise.

## Recommended Compiler Settings

Use a modern C compiler with C11 enabled:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic path/to/example.c -o build/example -lm
```

The flags are intentionally strict:

- `-std=c11` keeps examples tied to a predictable C standard.
- `-Wall -Wextra` catches many beginner mistakes early.
- `-Wpedantic` warns about non-standard extensions.
- `-lm` links the math library for examples that use `math.h`.

## Build Everything

On Linux or GitHub Actions:

```sh
make all
```

Run the modular project tests:

```sh
make test
```

Clean generated binaries:

```sh
make clean
```

## Windows Notes

On Windows, use one of these options:

- Install MSYS2 or MinGW and run `make all`.
- Use WSL and run the Linux commands above.
- Compile a single file manually with your installed compiler.

The repository does not commit generated binaries. Build output belongs in
`build/`.

## What CI Checks

The GitHub Actions workflow compiles every standalone `.c` file in `en/` and
`tr/`, builds the modular library projects, and runs their tests. If a new
example does not compile or a modular project test fails, the workflow should
fail before the change is merged.

---

| TR | EN |
| --- | --- |
| [TR Learning Path](../tr/LEARNING_PATH.md) | [EN Learning Path](../en/LEARNING_PATH.md) |
| [Next TR: build_run_main_debugging.md](../tr/notes/build_run_main_debugging.md) | [Next EN: build_run_main_debugging.md](../en/notes/build_run_main_debugging.md) |
