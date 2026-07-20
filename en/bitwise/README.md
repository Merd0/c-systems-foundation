# Bitwise Operations

Bitwise operations work directly on the bits inside integer values. They are
common in systems programming, embedded development, compression, protocols,
permissions, flags, and low-level performance-sensitive code.

## Core Operators

- `&`: bitwise AND
- `|`: bitwise OR
- `^`: bitwise XOR
- `~`: bitwise NOT
- `<<`: left shift
- `>>`: right shift

Example:

```c
unsigned int flags = 0;
flags |= 1u << 2;  // set bit 2
flags &= ~(1u << 2); // clear bit 2
```

## Mental Model

Each bit can represent a yes/no state. A single integer can store many flags:

```text
bit 0: can read
bit 1: can write
bit 2: can execute
```

This is compact and fast, but it must be documented clearly.

## Masks

A mask selects one or more bits:

```c
#define PERM_READ  (1u << 0)
#define PERM_WRITE (1u << 1)
#define PERM_EXEC  (1u << 2)
```

Set a flag:

```c
permissions |= PERM_WRITE;
```

Clear a flag:

```c
permissions &= ~PERM_WRITE;
```

Toggle a flag:

```c
permissions ^= PERM_WRITE;
```

Check a flag:

```c
if ((permissions & PERM_WRITE) != 0)
{
    puts("write allowed");
}
```

## Shifts

Left shift often means multiplying by powers of two for unsigned integers:

```c
1u << 3 // 8
```

Be careful with signed integers. Shifting negative signed values is not portable
in the way beginners often expect. Prefer unsigned types for bit work.

## Common Mistakes

- Using signed integers for bit masks.
- Forgetting parentheses around mask expressions.
- Confusing logical `&&` with bitwise `&`.
- Checking a flag with `permissions == PERM_WRITE` instead of masking.
- Shifting by a value greater than or equal to the bit width.
- Treating bit-packed values as self-documenting.

## Files in This Folder

- `permission_flags.c`: set, clear, toggle, and check permission bits.
- `bit_masks_and_packing.c`: pack small values into one integer.
- `xor_toggle_demo.c`: XOR for toggling and simple differences.

## Real-World Usage

Bitwise operations appear in file permissions, network protocol headers,
embedded register configuration, compression, checksums, graphics formats, and
feature flags.

## Exercises

1. Add a `PERM_DELETE` flag to the permission example.
2. Write a function that checks whether all requested flags are present.
3. Pack day, month, and year into one unsigned integer.
4. Explain why unsigned integers are preferred for bitwise operations.
5. Print the binary representation of an 8-bit value.

## Review Questions

1. What is the difference between `&` and `&&`?
2. How do you clear one bit without changing the others?
3. Why is `1u << n` often used for masks?
4. Why is `permissions == PERM_WRITE` usually the wrong check?
5. What risks exist with signed shifts?

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: permission_flags.c](permission_flags.c) |
