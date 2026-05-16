# File I/O

File I/O lets a C program persist data outside process memory. This is how a CLI
tool saves records, reads configuration, writes logs, imports CSV-like text, or
stores binary data.

## Mental Model

C represents an open file with a `FILE *` stream:

```c
FILE *fp = fopen("data.txt", "r");
```

The stream must be closed:

```c
fclose(fp);
```

Always check whether `fopen` succeeded before using the stream.

## Common Modes

- `"r"`: read existing text file
- `"w"`: write text file, replacing existing content
- `"a"`: append text
- `"rb"`: read binary
- `"wb"`: write binary
- `"r+"`: read and write existing file

Use text mode for human-readable formats and binary mode for raw bytes or fixed
record layouts.

## Text I/O

Prefer `fgets` for line-based input:

```c
char line[128];
if (fgets(line, sizeof(line), fp) != NULL)
{
    /* parse line */
}
```

Use `fprintf` for formatted output:

```c
fprintf(fp, "%d|%s|%.2f\n", id, name, price);
```

`fscanf` can be useful for controlled formats, but it becomes fragile when data
contains spaces, missing fields, or malformed input.

## Binary I/O

Binary I/O uses `fread` and `fwrite`.

```c
fwrite(records, sizeof(records[0]), count, fp);
fread(records, sizeof(records[0]), count, fp);
```

Do not blindly use binary struct dumps as portable file formats. Struct padding,
endianness, compiler settings, and version changes can break compatibility.

## Error Handling

Check file operations:

```c
FILE *fp = fopen("data.txt", "r");
if (fp == NULL)
{
    perror("data.txt");
    return 1;
}
```

`perror` prints a message based on `errno`.

## Cleanup Rules

- Close every successfully opened file.
- Avoid returning early before `fclose` unless cleanup is already handled.
- Treat partial reads and writes as possible failures.
- Keep file paths configurable in real applications.

## Files in This Folder

- `file_write_read_examples.c`: basic write, append, and read.
- `line_based_records.c`: line-based persistence with parsing.
- `binary_record_io.c`: simple binary read/write with `fread` and `fwrite`.

## Real-World Usage

File I/O is used for logs, configuration files, CLI persistence, import/export
tools, save files, embedded data dumps, and lightweight local storage.

## Exercises

1. Write three product records to a text file and read them back.
2. Add error messages with `perror` to every failed `fopen`.
3. Parse a `name|price|stock` line safely.
4. Save an array of structs with `fwrite` and reload it with `fread`.
5. Explain why text formats are often easier to debug than binary formats.

## Review Questions

1. Why must `fopen` be checked?
2. What is the difference between `"w"` and `"a"`?
3. Why is `fgets` often safer than `fscanf` for text input?
4. What can make binary struct files non-portable?
5. What should a function do after opening a file successfully but failing later?

