# Structs

`struct` is C's main tool for grouping related values under one type. It is how
you model records such as a product, student, user, file entry, coordinate,
configuration, or linked-list node.

## Why Structs Matter

Without structs, related data is often split across parallel arrays:

```c
int ids[100];
double prices[100];
int stocks[100];
```

That layout is fragile because `ids[i]`, `prices[i]`, and `stocks[i]` must
always stay synchronized. A struct lets one object carry its own fields:

```c
typedef struct
{
    int id;
    double price;
    int stock;
} Product;
```

## Declaration Forms

Classic tagged struct:

```c
struct Product
{
    int id;
    double price;
};
```

With `typedef`, which is common in beginner-friendly examples:

```c
typedef struct
{
    int id;
    double price;
} Product;
```

Both forms are valid. The tagged form is useful for self-referential structures
such as linked-list nodes:

```c
typedef struct Node
{
    int value;
    struct Node *next;
} Node;
```

## Accessing Members

Use `.` when you have the struct value:

```c
product.stock = 10;
```

Use `->` when you have a pointer to the struct:

```c
product_ptr->stock = 10;
```

`ptr->field` is shorthand for `(*ptr).field`.

## Passing Structs to Functions

Passing by value copies the whole struct:

```c
void print_product(Product product);
```

Passing by pointer avoids the copy and allows modification:

```c
void update_stock(Product *product, int amount);
```

Passing by `const` pointer avoids the copy while protecting the object from
modification:

```c
void print_product(const Product *product);
```

Use `const Product *` for read-only access in most real code.

## Initialization

Positional initialization depends on field order:

```c
Product keyboard = {101, 79.99, 12};
```

Designated initializers are clearer and safer when a struct has many fields:

```c
Product keyboard = {
    .id = 101,
    .price = 79.99,
    .stock = 12,
};
```

## Memory Layout and Padding

C may insert padding bytes between fields so each member is aligned efficiently
for the CPU. This means `sizeof(struct)` can be larger than the sum of its
fields.

Field order can change the size of a struct. This matters in systems code,
embedded work, file formats, networking, and large arrays of records.

See `struct_padding_alignment.c`.

## Shallow Copy vs Deep Copy

Assigning one struct to another copies its fields. If the struct contains only
plain values, this is usually fine.

If a struct contains a pointer, assignment copies the pointer address, not the
heap memory behind it. That is a shallow copy. A deep copy allocates new memory
and copies the pointed-to data. This belongs to the memory-management track, but
it starts becoming important as soon as structs hold pointers.

## Common Mistakes

- Using `.` on a pointer instead of `->`.
- Returning a pointer to a local struct variable.
- Forgetting to validate a struct pointer before dereferencing it.
- Copying structs that contain owning pointers without defining ownership.
- Assuming `sizeof(struct)` is just the sum of member sizes.
- Saving structs directly to binary files without considering padding,
  endianness, and versioning.

## Files in This Folder

- `struct_intro_and_array.c`: basic `typedef struct` and array of structs.
- `struct_pointer_update.c`: passing a struct by pointer and modifying it.
- `struct_designated_initializers.c`: clearer initialization with field names.
- `struct_nested_and_const.c`: nested structs and read-only pointer parameters.
- `struct_padding_alignment.c`: layout, padding, and `offsetof`.

## Real-World Usage

Structs appear everywhere in C:

- CLI apps store parsed command data in structs.
- Embedded systems represent sensor readings and device state.
- Operating-system APIs expose file, process, and socket metadata as structs.
- Parsers build tokens and syntax nodes with structs.
- Data structures such as linked lists, queues, hash tables, and trees are built
  from structs and pointers.

## Exercises

1. Add an `email` field to a `Student` struct and print it.
2. Write a function that receives `const Product *` and prints a formatted row.
3. Create an array of five products and calculate the total inventory value.
4. Create a nested `Address` struct inside a `Customer` struct.
5. Reorder fields in `struct_padding_alignment.c` and compare `sizeof`.

## Review Questions

1. What is the difference between `.` and `->`?
2. Why is `const StructName *` useful for read-only functions?
3. When does struct assignment become dangerous?
4. Why can `sizeof(struct)` be larger than expected?
5. When would you prefer a struct over separate arrays?

---

| Back | Next |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Next: struct_intro_and_array.c](struct_intro_and_array.c) |
