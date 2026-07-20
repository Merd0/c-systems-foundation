# Data Structures In C

C does not provide ready-made containers like C++ does. You often build small
data structures yourself, or use project-specific container utilities.

## Mental Model

- Arrays are contiguous and cache-friendly.
- Dynamic arrays grow with `realloc`.
- Linked lists make insertion/removal cheap when you already have a node.
- Linked lists cost extra memory per node and are less cache-friendly.
- Intrusive lists store the list node inside the object; this pattern is common
  in low-level C code.

## Common Mistakes

- Forgetting to free every node in a linked list.
- Losing the head pointer during insertion or deletion.
- Using a linked list when a dynamic array would be simpler and faster.
- Not handling allocation failure.
- Returning pointers to removed or freed nodes.

## Examples

- `singly_linked_list.c`: insert, find, remove, and destroy a simple list.
- `doubly_linked_list.c`: previous/next links and tail insertion.
- `intrusive_linked_list.c`: low-level pattern used by systems-style C code.
- `dynamic_array.c`: vector-like growth with `realloc`.

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: dynamic_array.c](dynamic_array.c) |
