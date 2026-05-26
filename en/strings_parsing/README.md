# Strings And Parsing

String handling is one of the easiest places to create bugs in C. Prefer bounded
copies, explicit lengths, checked parsing, and simple formats.

## Mental Model

- C strings are null-terminated character arrays.
- `fgets` is safer than unbounded input.
- `strtol` gives better error handling than `atoi`.
- Tokenization changes the buffer when using `strtok`.
- Parsing should validate every field before using it.

## Common Mistakes

- Using `gets`.
- Trusting `atoi` even when input is invalid.
- Forgetting that `strtok` modifies the input buffer.
- Copying strings without checking destination size.

## Example

- `safe_token_parsing.c`: parse a comma-separated record with validation.

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: safe_token_parsing.c](../study/051-safe-token-parsing.md) |
