# Adding Content

Use this checklist to keep both language tracks and the build system aligned.

## Add An Example

1. Place the source in the existing topic folder; use lowercase `snake_case.c` and do not use spaces in its path.
2. Prefer English identifiers in new code unless localization has clear teaching value.
3. Make a standalone example contain its own `main` and compile under C11 with `-Wall -Wextra -Wpedantic`.
4. Add or update the counterpart in the other language tree, or document an intentional language-only example.
5. Link the example from the relevant topic page and learning path only when it belongs to the ordered curriculum.
6. Run `make all`, `make test`, and `python3 scripts/validate_repository.py`.

The root build discovers `.c` files from the filesystem through
`scripts/list_c_sources.py`; a valid new example is included before it is
tracked by Git and when the repository comes from a ZIP download. Sources below
the registered modular project directories are intentionally excluded from the
standalone build.

## Add A Topic

Extend an existing folder before adding another top-level topic. A topic page should explain the mental model, list runnable examples, name common errors, connect the concept to systems or embedded work, and provide small exercises.

## Add A Project

Small demonstrations may remain single-file programs under each language's `projects/` folder. A modular project should separate public headers, implementation, and tests, include a local Makefile, and be registered in the root `MODULAR_PROJECTS` list.

See [code style](code-style.md), [build guide](build-guide.md), and [repository structure](repository-structure.md) before changing shared conventions.
