# Modular C And Opaque Handles

Large C programs usually hide implementation details behind small APIs. The
opaque handle pattern lets callers use a type without knowing its internal
fields.

## Mental Model

- Header files should expose the public API, not every private field.
- Source files own implementation details.
- An opaque type is declared in the header and defined in the source file.
- Create/destroy functions make ownership explicit.
- This pattern is common in libraries, embedded drivers, and platform APIs.

## Common Mistakes

- Exposing struct fields that callers should not modify directly.
- Forgetting a matching destroy function for allocated handles.
- Returning partially initialized objects.
- Hiding ownership rules from the caller.

## Example

- `opaque_handle_pattern.c`: single-file demonstration of a public API section
  and a private implementation section.
