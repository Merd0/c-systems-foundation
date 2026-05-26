# Pointers

Pointers are one of the most important parts of C. A pointer stores the address
of another object, which means it lets code talk about where data lives, not only
what value the data currently has.

## Why This Matters

You need pointers to:

- modify a variable from another function
- pass arrays and large structs efficiently
- allocate memory on the heap
- build linked lists, trees, queues, and hash tables
- work with strings, files, buffers, and operating-system APIs
- express optional data with `NULL`

## Mental Model

Think of memory as numbered cells. A normal variable stores a value:

```c
int score = 90;
```

A pointer stores the address of that value:

```c
int *score_ptr = &score;
```

Dereferencing follows the address:

```c
*score_ptr = 95;
```

After this assignment, `score` is also `95`.

## Core Operators

- `&value`: address of `value`
- `*ptr`: value stored at the address inside `ptr`
- `ptr->field`: access a struct field through a pointer
- `ptr + n`: move by `n` elements, not by `n` raw bytes

## NULL

`NULL` means the pointer intentionally points to no valid object.

```c
int *ptr = NULL;
```

Always check a pointer before dereferencing if it can be `NULL`:

```c
if (ptr != NULL)
{
    printf("%d\n", *ptr);
}
```

Dereferencing `NULL` is undefined behavior.

## Arrays and Pointer Decay

In most expressions, an array name decays to a pointer to its first element:

```c
int values[] = {10, 20, 30};
int *p = values;
```

`values[i]` and `*(values + i)` mean the same element access. This is why array
parameters often appear as pointers:

```c
int sum_array(const int *values, int length);
```

The pointer does not carry the array length. Pass the length separately.

## const and Pointers

Read declarations from the identifier outward:

```c
const int *p;      // pointer to const int, cannot change *p through p
int *const p;      // const pointer to int, cannot reassign p
const int *const p; // const pointer to const int
```

Use `const T *` for read-only function parameters:

```c
void print_values(const int *values, int length);
```

## Ownership

A pointer may point to memory it does not own, or it may own heap memory that
must later be freed. Good C code makes ownership obvious.

Non-owning pointer:

```c
void print_name(const char *name);
```

Owning pointer:

```c
char *copy_name(const char *name); // caller must free the result
```

## Common Mistakes

- Dereferencing `NULL`.
- Returning the address of a local variable.
- Using a pointer after `free`.
- Freeing the same pointer twice.
- Forgetting that pointer arithmetic moves by element size.
- Losing the original pointer returned by `malloc`.
- Treating an array parameter as if it knows its length.

## Files in This Folder

- `call_by_value_reference.c`: value copy vs pointer-based update.
- `null_pointer_and_array.c`: defensive pointer checks and array traversal.
- `pointer_arithmetic_walkthrough.c`: array access through pointer movement.
- `const_pointer_parameters.c`: `const` with read-only pointer parameters.
- `dangling_pointer_warning.c`: why returning local addresses is unsafe.

## Real-World Usage

Pointers are the base layer of C systems code. File APIs use `FILE *`, dynamic
memory uses heap pointers, strings are `char *`, data structures link nodes with
pointers, and OS APIs often fill caller-provided buffers through pointers.

## Exercises

1. Write a function that swaps two integers using pointers.
2. Write a function that finds the maximum value in an array using `const int *`.
3. Modify an array through pointer arithmetic without using `[]`.
4. Explain why a pointer parameter still needs a length parameter for arrays.
5. Write a function that accepts `const char *` and counts characters.

## Review Questions

1. What is the difference between `ptr` and `*ptr`?
2. Why is `NULL` checking important?
3. Why does `array + 1` not always mean one byte forward?
4. What does `const int *p` protect?
5. What makes a pointer owning or non-owning?

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: call_by_value_reference.c](call_by_value_reference.c) |
