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

The Makefile calls the dependency-free `scripts/list_c_sources.py` helper. It
searches `en/` and `tr/` directly, excludes modular-project and build folders,
and therefore works without a `.git` directory and includes valid untracked
examples. Source paths use lowercase `snake_case` and must not contain spaces.

Run the modular project tests:

```sh
make test
```

Validate curriculum parity, Markdown links, and UTF-8 text files:

```sh
python3 scripts/validate_repository.py
```

On Windows, use `py -3` when `python3` is not available. Pass the same launcher
to Make when building the repository:

```sh
make PYTHON="py -3" all
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

The GitHub Actions workflow validates curriculum, links, source parity, and
encoding; compiles every discovered standalone `.c` file in `en/` and `tr/`;
builds the modular library projects; runs their tests; and confirms that these
checks leave no generated diff. A broken example, project test, curriculum
mapping, or local documentation link fails the workflow.

---

| TR | EN |
| --- | --- |
| [TR Learning Path](../tr/LEARNING_PATH.md) | [EN Learning Path](../en/LEARNING_PATH.md) |
| [Next TR: build_run_main_debugging.md](../tr/notes/build_run_main_debugging.md) | [Next EN: build_run_main_debugging.md](../en/notes/build_run_main_debugging.md) |
