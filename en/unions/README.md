# Unions

A `union` stores different members in the same memory location. Unlike a
`struct`, which stores all fields at the same time, a union is meant to hold one
active interpretation at a time.

## Union vs Struct

Struct:

```c
typedef struct
{
    int id;
    double price;
} Product;
```

Both `id` and `price` exist at the same time.

Union:

```c
typedef union
{
    int as_int;
    double as_double;
} Value;
```

The members overlap. Writing `as_double` changes the same storage that `as_int`
would read from.

## sizeof

The size of a union is at least as large as its largest member, plus any padding
needed for alignment.

```c
sizeof(union) >= sizeof(largest_member)
```

This is why unions are useful when a value can be one of several shapes, but
never all at once.

## Active Member

Portable code should track which member is currently meaningful. The common
pattern is a tagged union:

```c
typedef enum
{
    VALUE_INT,
    VALUE_DOUBLE,
    VALUE_TEXT
} ValueType;

typedef struct
{
    ValueType type;
    union
    {
        int as_int;
        double as_double;
        char text[32];
    } data;
} Value;
```

The tag tells the program which union member to read.

## When to Use Unions

Use unions when:

- a value can be one of several types
- memory layout matters
- parsing binary formats or protocols
- modeling variant data
- interacting with hardware or embedded registers

Do not use unions just to avoid writing a struct or to guess at hidden type
conversions.

## Portability Warning

Reading a different union member than the one most recently written can be
non-portable unless the behavior is specifically defined for your use case. For
teaching and production code, prefer tagged unions and read the member indicated
by the tag.

## Files in This Folder

- `union_size_overlay.c`: shared storage and `sizeof`.
- `tagged_union_variant.c`: safe variant value pattern.
- `protocol_message_union.c`: message payload modeled by a tag plus union.

## Real-World Usage

Unions are used in interpreters, parsers, protocol payloads, embedded register
views, token values, AST nodes, and APIs that carry variant data.

## Exercises

1. Create a tagged union that can hold `int`, `double`, or `char[32]`.
2. Add a `print_value` function that switches on the tag.
3. Compare `sizeof` for a struct and union with the same members.
4. Model a network message with `LOGIN`, `DATA`, and `PING` payloads.
5. Explain why reading the wrong member is dangerous.

## Review Questions

1. What is the key difference between `struct` and `union`?
2. Why does a union need a tag in safe code?
3. How is `sizeof(union)` determined?
4. When are unions useful in systems programming?
5. What can go wrong if you read the wrong member?

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: union_size_overlay.c](../study/033-union-size-overlay.md) |
