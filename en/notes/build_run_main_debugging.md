# Build, Run, main(), and Debugging

## What Is Build?

Build is the step that turns C source code into an executable program.

## What Is Run?

Run means executing the compiled program.

## Build vs Run

- Build errors usually come from syntax, type, include, or linker problems.
- Run errors usually come from logic, input, memory, or runtime state problems.

## What Does main() Do?

A C program starts from the `main()` function.

## What Does return 0 Mean?

`return 0` conventionally means the program completed successfully.

## Debugging Mindset

- Set a breakpoint.
- Step through code line by line.
- Inspect variable values.
- Compare expected output with actual output.

## Better Practices

- Do not use `gets`; it is unsafe.
- Prefer `fgets` for text input.
- Check the return value of `scanf`.
- Match `printf` format specifiers with the correct types.

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: variables_basics.c](../study/003-variables-basics.md) |
