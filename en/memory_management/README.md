# Memory Management

Memory management is the part of C where you decide how long data lives, where
it is stored, and who is responsible for releasing it.

## Storage Areas

Important categories:

- automatic storage: local variables, usually on the stack
- static storage: globals and `static` objects, alive for the whole program
- dynamic storage: heap memory allocated with `malloc`, `calloc`, or `realloc`

Stack memory is automatically cleaned up when a function returns. Heap memory
stays alive until you call `free`.

## Core Heap Functions

```c
void *malloc(size_t size);
void *calloc(size_t count, size_t size);
void *realloc(void *ptr, size_t new_size);
void free(void *ptr);
```

- `malloc` allocates uninitialized memory.
- `calloc` allocates and zero-initializes memory.
- `realloc` resizes an existing allocation.
- `free` releases heap memory.

Always check allocation results:

```c
int *items = malloc(count * sizeof(*items));
if (items == NULL)
{
    return false;
}
```

## Ownership Rules

Every allocation should have a clear owner. The owner is responsible for calling
`free` exactly once.

Good APIs make this visible:

```c
char *read_line_copy(void); // caller owns returned memory
void destroy_buffer(char *buffer); // releases owned memory
```

## Common Failure Modes

- memory leak: allocated memory is never freed
- double free: the same allocation is freed twice
- use-after-free: memory is used after it has been released
- dangling pointer: pointer refers to an object whose lifetime has ended
- buffer overflow: code writes past allocated bounds
- allocation overflow: `count * sizeof(T)` overflows before allocation

## realloc Safety

Do not overwrite the original pointer directly:

```c
int *tmp = realloc(items, new_count * sizeof(*items));
if (tmp == NULL)
{
    free(items);
    return false;
}
items = tmp;
```

If `realloc` fails, the original pointer is still valid. Keeping a temporary
pointer prevents losing it.

## Cleanup Pattern

When a function has multiple allocations, use one cleanup path:

```c
bool ok = false;
char *name = malloc(32);
int *scores = malloc(10 * sizeof(*scores));

if (name == NULL || scores == NULL)
{
    goto cleanup;
}

ok = true;

cleanup:
free(scores);
free(name);
return ok;
```

This style is common in C because it keeps cleanup centralized.

## Files in This Folder

- `malloc_calloc_free_examples.c`: basic allocation and cleanup.
- `union_example.c`: introductory memory overlay example.
- `realloc_growth_buffer.c`: safe growable array pattern.
- `ownership_transfer.c`: documenting who must call `free`.

## Real-World Usage

Memory management shows up in parsers, servers, embedded systems, CLI tools,
image processing, networking, database engines, and almost any C program that
handles data whose size is not known at compile time.

## Exercises

1. Allocate an array based on user input and initialize it.
2. Write a cleanup path for a function with two allocations.
3. Grow an integer buffer with `realloc`.
4. Explain why `realloc(ptr, size)` should use a temporary pointer.
5. Write comments that document ownership for a function returning heap memory.

## Review Questions

1. What is the difference between stack and heap lifetime?
2. Why must every successful allocation have one matching `free`?
3. What is use-after-free?
4. Why can `count * sizeof(T)` be risky?
5. What should happen if the second allocation in a function fails?

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: union_example.c](union_example.c) |
