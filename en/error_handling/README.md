# Error Handling Patterns In C

C does not have exceptions. Production C code usually communicates failure with
status codes, output parameters, sentinel values, or small result structs.

## Mental Model

- Return a status code when callers need to know why an operation failed.
- Use output parameters for successful results.
- Keep ownership rules clear when a function allocates memory.
- Validate input at API boundaries.
- Avoid mixing `0 means success` and `1 means success` without documenting it.

## Common Mistakes

- Ignoring return values.
- Returning a pointer without explaining ownership.
- Printing an error but still pretending the operation succeeded.
- Overwriting output parameters after failure.

## Example

- `status_code_result.c`: status enum + output parameter + validation.
