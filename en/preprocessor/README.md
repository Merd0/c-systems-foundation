# Preprocessor

The C preprocessor runs before compilation. It handles directives such as
`#include`, `#define`, `#if`, and include guards.

## Why This Matters

The preprocessor is used for:

- including header files
- defining constants
- building small macros
- enabling platform-specific code
- preventing duplicate header inclusion
- compiling debug or feature-specific blocks

## Include Directives

Use angle brackets for standard or system headers:

```c
#include <stdio.h>
```

Use quotes for project headers:

```c
#include "math_utils.h"
```

## Include Guards

Headers should protect themselves from being included more than once:

```c
#ifndef CONFIG_H
#define CONFIG_H

/* declarations */

#endif
```

`#pragma once` is widely supported, but include guards are portable C.

## Object-Like Macros

Use object-like macros carefully:

```c
#define MAX_USERS 100
```

For typed constants, prefer `const` objects when possible. Macros do not have a
type and are replaced as text before compilation.

## Function-Like Macros

Function-like macros can be dangerous because arguments may be evaluated more
than once:

```c
#define SQUARE(x) ((x) * (x))
```

`SQUARE(i++)` increments `i` twice. Prefer real functions unless a macro is
really needed.

## Conditional Compilation

```c
#ifdef DEBUG
printf("debug: value=%d\n", value);
#endif
```

This is useful for debug logging, platform branches, and optional features.

## Common Mistakes

- Missing parentheses in macros.
- Writing macros that evaluate arguments more than once.
- Putting definitions in headers when only declarations are needed.
- Forgetting include guards.
- Using macros where `enum`, `const`, or a function would be clearer.
- Hiding too much logic behind preprocessor conditionals.

## Files in This Folder

- `macro_constants_and_guards.c`: constants and compile-time flags.
- `macro_pitfalls.c`: unsafe macro examples and safer alternatives.
- `conditional_compilation.c`: debug and platform-style branches.

## Real-World Usage

The preprocessor appears in portable libraries, embedded firmware, debug
instrumentation, feature flags, build configuration, and header organization.

## Exercises

1. Add an include guard to a new header file.
2. Replace a risky macro with a real function.
3. Compile an example with and without `-DDEBUG`.
4. Write a macro constant and explain why it has no type.
5. Create a header with declarations and a `.c` file with definitions.

## Review Questions

1. What happens before the compiler sees a `#define` macro?
2. Why do headers need include guards?
3. Why is `SQUARE(i++)` dangerous with a macro?
4. When is conditional compilation useful?
5. Why can macros make debugging harder?

