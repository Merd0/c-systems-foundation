# Topic-Based Mini Tricks

## Input handling
- If text comes after `scanf`, clean the input buffer first.
- Catch invalid input early with `scanf(...) != 1`.
- Use `fgets` instead of `gets`.

## printf usage
- Match format specifiers with variable types.
- Use precision like `%.2f` for decimal control.
- Use `\n` and `\t` to improve readability.

## if-else writing
- Handle invalid input first, then write core logic.
- Keep conditions simple and split complex checks.

## casting
- Use casting for decimal division: `(double)a / b`.
- Remember data loss can happen (`(int)19.99 -> 19`).

## debugging
- Compare expected output vs actual output.
- Add breakpoints on critical lines.
- Inspect variable values step by step.
