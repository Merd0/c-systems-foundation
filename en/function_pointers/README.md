# Function Pointers And Callbacks

Function pointers let C code pass behavior as data. They are common in drivers,
parsers, event systems, sorting callbacks, and table-driven command handling.

## Mental Model

- A function pointer stores the address of a function with a matching signature.
- A callback is a function called by another function later.
- Dispatch tables replace long `switch` blocks when commands map cleanly to
  handlers.
- `void *context` is often used to pass caller-owned state into callbacks.

## Common Mistakes

- Calling through a function pointer without checking it is not `NULL`.
- Using the wrong function signature.
- Hiding too much logic behind callbacks.
- Passing a context pointer with the wrong type.

## Example

- `callbacks_and_dispatch_table.c`: table-driven command handling and callback
  context.

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: callbacks_and_dispatch_table.c](callbacks_and_dispatch_table.c) |
