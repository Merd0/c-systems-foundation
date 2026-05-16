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
`tr/`. If a new example does not compile, the workflow should fail before the
change is merged.

