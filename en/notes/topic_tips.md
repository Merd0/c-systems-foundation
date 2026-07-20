# Topic Tips

## Input

- Clear the input buffer when mixing `scanf` and line input.
- Catch invalid input early with `scanf(...) != 1`.
- Use `fgets` instead of `gets`.

## printf

- Match each format specifier to the variable type.
- Use precision such as `%.2f` for decimal formatting.
- Use `\n` and `\t` to make output easier to read.

## if-else

- Handle invalid input before the main logic.
- Split complex conditions into smaller checks when readability suffers.

## Casting

- Cast when you need a floating-point result from integer division: `(double)a / b`.
- Remember that casts can lose data, such as `(int)19.99 -> 19`.

## Debugging

- Compare expected output with actual output.
- Put breakpoints near important decisions.
- Inspect variable values at the moment the bug appears.
