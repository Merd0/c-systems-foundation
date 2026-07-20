# C Systems Foundation Learning Path

This file is the main control panel for the repository. You can keep only this
page open, move through the material in order, click into every topic, and come
back here without losing your place.

## How To Use It

1. Follow the steps in order; do not skip ahead too early.
2. Open the linked lesson resource directly; it is either a topic guide or runnable source.
3. Read the source, predict the output or behavior, then compile and run it.
4. After each example, make a small change and run it again.
5. Treat an item as complete only when you can satisfy the "Done when" column.

## Level Map

| Level | Goal |
| --- | --- |
| 0 | Understand build, run, `main`, compiler, and workflow basics |
| 1 | Learn core syntax, types, input/output, and operators |
| 2 | Build program behavior with control flow and loops |
| 3 | Combine arrays, strings, functions, and headers |
| 4 | Understand the pointer model safely and clearly |
| 5 | Model real data with structs and unions |
| 6 | Build heap, ownership, `malloc/free/realloc` discipline |
| 7 | Implement practical data structures manually in C |
| 8 | Learn callbacks, error handling, parsing, and modular APIs |
| 9 | Tie together file I/O, preprocessor, and bitwise systems topics |
| 10 | Apply the knowledge through algorithms, scenarios, and projects |
| 11 | Connect C topics to LeetCode-style problem practice |

## Level 0: Build And Workflow

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 1 | [Lesson 1: Build Guide](../docs/build-guide.md) | How the repo builds and what CI checks | You can explain why `make all` and `make test` exist |
| 2 | [Lesson 2: Build Run Main Debugging](notes/build_run_main_debugging.md) | `main`, build, run, debug loop | You can explain how a source file becomes runnable |

## Level 1: Core Syntax

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 3 | [Lesson 3: Variables Basics](fundamentals/variables_basics.c) | Variables, basic types, formatted output | You can match types with format specifiers |
| 4 | [Lesson 4: Printf Examples](input_output/printf_examples.c) | `printf`, alignment, readable output | You can write your own formatted output |
| 5 | [Lesson 5: Scanf Usage](input_output/scanf_usage.c) | Input and return-value checks | You can reject invalid input deliberately |
| 6 | [Lesson 6: Arithmetic Ops](operators/arithmetic_ops.c) | Arithmetic operators and precedence | You can explain integer division behavior |
| 7 | [Lesson 7: Casting Examples](operators/casting_examples.c) | Casts, data loss, conversion rules | You know when an explicit cast is needed |
| 8 | [Lesson 8: Bool Const Define Sizeof](operators/bool_const_define_sizeof.c) | `bool`, `const`, `#define`, `sizeof` | You can explain the difference between constants and macros |
| 9 | [Lesson 9: Math Library Examples](operators/math_library_examples.c) | `math.h` and `-lm` linking | You know why math functions may need linker flags |

## Level 2: Control Flow And Loops

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 10 | [Lesson 10: If Else Examples](control_flow/if_else_examples.c) | Decisions and guard conditions | You handle invalid input before main logic |
| 11 | [Lesson 11: Switch Case Examples](control_flow/switch_case_examples.c) | Menus and fixed choices | You can build a small `switch` menu |
| 12 | [Lesson 12: For While Do Examples](loops/for_while_do_examples.c) | `for`, `while`, `do-while` differences | You can explain why you chose a loop type |
| 13 | [Lesson 13: Break Continue Rand](loops/break_continue_rand.c) | `break`, `continue`, basic randomness | You can deliberately change loop flow |

## Level 3: Arrays, Strings, And Functions

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 14 | [Lesson 14: Arrays And Strings Basics](arrays/arrays_and_strings_basics.c) | Array indexes, char arrays, `'\0'` | You can explain where a C string ends |
| 15 | [Lesson 15: Multidimensional Arrays](arrays/multidimensional_arrays.c) | 2D arrays and row/column traversal | You can traverse a matrix in row-major order |
| 16 | [Lesson 16: Functions Intro Return](functions/functions_intro_return.c) | Functions, parameters, return values | You can write a small single-purpose function |
| 17 | [Lesson 17: Array Parameter Examples](functions/array_parameter_examples.c) | Array parameters and size passing | You remember to pass size together with arrays |
| 18 | [Lesson 18: Palindrome Solution](functions/palindrome_solution.c) | Splitting problem logic into functions | You can keep checking logic outside `main` |
| 19 | [Lesson 19: Header Usage Example](headers/header_usage_example.c) | Headers, declarations, includes | You can explain the role of a `.h` file |

## Level 4: Pointers

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 20 | [Lesson 20: Pointers Overview](pointers/README.md) | Pointer mental model | You can explain address, value, and dereference |
| 21 | [Lesson 21: Call By Value Reference](pointers/call_by_value_reference.c) | Value/reference behavior | You know when a function changes caller data |
| 22 | [Lesson 22: Null Pointer And Array](pointers/null_pointer_and_array.c) | `NULL`, array-pointer relationship | You can explain why `NULL` checks matter |
| 23 | [Lesson 23: Pointer Arithmetic Walkthrough](pointers/pointer_arithmetic_walkthrough.c) | Pointer arithmetic | You know why `ptr + 1` moves by element size |
| 24 | [Lesson 24: Const Pointer Parameters](pointers/const_pointer_parameters.c) | `const` pointer parameters | You can express function contracts with `const` |
| 25 | [Lesson 25: Dangling Pointer Warning](pointers/dangling_pointer_warning.c) | Dangling pointer risk | You know why expired addresses are dangerous |

## Level 5: Structs And Unions

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 26 | [Lesson 26: Structs Overview](structs/README.md) | Struct use cases | You know when to choose a struct over parallel arrays |
| 27 | [Lesson 27: Struct Intro And Array](structs/struct_intro_and_array.c) | Struct definitions and struct arrays | You can store multiple records in a struct array |
| 28 | [Lesson 28: Struct Pointer Update](structs/struct_pointer_update.c) | Updating through struct pointers | You use `.` and `->` correctly |
| 29 | [Lesson 29: Struct Designated Initializers](structs/struct_designated_initializers.c) | Designated initializers | You can initialize fields by name |
| 30 | [Lesson 30: Struct Nested And Const](structs/struct_nested_and_const.c) | Nested structs and `const` | You can model nested data readably |
| 31 | [Lesson 31: Struct Padding Alignment](structs/struct_padding_alignment.c) | Padding, alignment, layout | You know why struct size can exceed field totals |
| 32 | [Lesson 32: Unions Overview](unions/README.md) | Union mental model | You can explain shared storage |
| 33 | [Lesson 33: Union Size Overlay](unions/union_size_overlay.c) | Overlay and size behavior | You know union size follows the largest member |
| 34 | [Lesson 34: Tagged Union Variant](unions/tagged_union_variant.c) | Tagged unions | You can track the active union member with a tag |
| 35 | [Lesson 35: Protocol Message Union](unions/protocol_message_union.c) | Protocol/message model | You can read a union inside a real message model |

## Level 6: Dynamic Memory

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 36 | [Lesson 36: Memory Management Overview](memory_management/README.md) | Heap, lifetime, ownership | You can answer who owns each allocation |
| 37 | [Lesson 37: Union Example](memory_management/union_example.c) | Memory overlay review | You can revisit shared-memory behavior |
| 38 | [Lesson 38: Malloc Calloc Free Examples](memory_management/malloc_calloc_free_examples.c) | `malloc`, `calloc`, `free` | You plan exactly one `free` for each allocation |
| 39 | [Lesson 39: Realloc Growth Buffer](memory_management/realloc_growth_buffer.c) | Safe growing buffers | You check `realloc` through a temporary pointer |
| 40 | [Lesson 40: Ownership Transfer](memory_management/ownership_transfer.c) | Ownership transfer | You can state who must free returned heap memory |

## Level 7: Practical Data Structures

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 41 | [Lesson 41: Data Structures Overview](data_structures/README.md) | Container thinking in C | You can compare arrays, dynamic arrays, and linked lists |
| 42 | [Lesson 42: Dynamic Array](data_structures/dynamic_array.c) | Vector-like growth | You know the difference between size and capacity |
| 43 | [Lesson 43: Singly Linked List](data_structures/singly_linked_list.c) | Singly linked lists | You can trace insert/search/delete/free |
| 44 | [Lesson 44: Doubly Linked List](data_structures/doubly_linked_list.c) | Doubly linked lists | You can update `prev` and `next` safely |
| 45 | [Lesson 45: Intrusive Linked List](data_structures/intrusive_linked_list.c) | Intrusive lists | You understand list nodes embedded in objects |

## Level 8: Practical C Interfaces

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 46 | [Lesson 46: Function Pointers Overview](function_pointers/README.md) | Function pointers and callbacks | You know why a function can be passed like data |
| 47 | [Lesson 47: Callbacks And Dispatch Table](function_pointers/callbacks_and_dispatch_table.c) | Dispatch tables | You can select behavior through a table |
| 48 | [Lesson 48: Error Handling Overview](error_handling/README.md) | Error models in C | You understand status return plus output parameter |
| 49 | [Lesson 49: Status Code Result](error_handling/status_code_result.c) | Status-code pattern | You can carry errors and results cleanly |
| 50 | [Lesson 50: Strings Parsing Overview](strings_parsing/README.md) | Safe string parsing | You can explain why `strtol` is safer than `atoi` |
| 51 | [Lesson 51: Safe Token Parsing](strings_parsing/safe_token_parsing.c) | Token and number parsing | You do not silently accept invalid tokens |
| 52 | [Lesson 52: Modular Design Overview](modular_design/README.md) | Modular C APIs | You understand header/implementation separation |
| 53 | [Lesson 53: Opaque Handle Pattern](modular_design/opaque_handle_pattern.c) | Opaque handles | You can hide struct internals behind an API |

## Level 9: File I/O, Preprocessor, And Bitwise Work

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 54 | [Lesson 54: File Io Overview](file_io/README.md) | Opening, reading, writing files | You check `fopen` and always close files |
| 55 | [Lesson 55: File Write Read Examples](file_io/file_write_read_examples.c) | Basic read/write | You can write output and read it back |
| 56 | [Lesson 56: Line Based Records](file_io/line_based_records.c) | Line-based records | You can parse records with `fgets` |
| 57 | [Lesson 57: Binary Record Io](file_io/binary_record_io.c) | Binary record I/O | You know binary and text formats differ |
| 58 | [Lesson 58: Preprocessor Overview](preprocessor/README.md) | Preprocessor mental model | You know macros run before compilation |
| 59 | [Lesson 59: Macro Constants And Guards](preprocessor/macro_constants_and_guards.c) | Macro constants and include guards | You can explain header guards |
| 60 | [Lesson 60: Macro Pitfalls](preprocessor/macro_pitfalls.c) | Macro risks | You know why macro arguments need parentheses |
| 61 | [Lesson 61: Conditional Compilation](preprocessor/conditional_compilation.c) | Conditional compilation | You can include/exclude code through build flags |
| 62 | [Lesson 62: Bitwise Overview](bitwise/README.md) | Bitwise mental model | You can distinguish flags, masks, and shifts |
| 63 | [Lesson 63: Permission Flags](bitwise/permission_flags.c) | Permission flags | You can store permissions in bits |
| 64 | [Lesson 64: Bit Masks And Packing](bitwise/bit_masks_and_packing.c) | Masks and packing | You can pack and extract a value |
| 65 | [Lesson 65: Xor Toggle Demo](bitwise/xor_toggle_demo.c) | XOR toggle | You know XOR toggle/cancel behavior |

## Level 10: Algorithms, Problem Solving, And Projects

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 66 | [Lesson 66: Char Frequency](algorithms/char_frequency.c) | Frequency arrays | You can count characters with a small array |
| 67 | [Lesson 67: Most Frequent Character](algorithms/most_frequent_character.c) | Max frequency | You can select a result from counts |
| 68 | [Lesson 68: Search Algorithms](algorithms/search_algorithms.c) | Linear/binary search | You choose binary search for sorted data |
| 69 | [Lesson 69: Sorting Algorithms](algorithms/sorting_algorithms.c) | Sorting logic | You can trace simple sorting steps |
| 70 | [Lesson 70: Luhn Validator](algorithms/luhn_validator.c) | Real algorithm implementation | You can translate a rule set into code |
| 71 | [Lesson 71: Problem Solving](problem_solving/README.md) | Small scenario problems | You have modified and run at least two examples |
| 72 | [Lesson 72: Library Management Cli](projects/library_management_cli.c) | Single-file CLI project | You can read menu, struct array, and input flow |
| 73 | [Lesson 73: Library Management File Persist](projects/library_management_file_persist.c) | File persistence project | You know how data survives program exit |
| 74 | [Lesson 74: Library Management Modular](projects/library_management_modular/README.md) | Modular project layout | You understand `include/`, `src/`, and `tests/` |

## Level 11: LeetCode Practice Bridge

| Step | Lesson resource | Focus | Done when |
| --- | --- | --- | --- |
| 75 | [Lesson 75: Leetcode Bridge](notes/leetcode_bridge.md) | Connect C topics to LeetCode practice | You can create a review plan from selected problems |

## Completion Routine

At the end of each level:

1. Rewrite one example from that level from scratch.
2. Break one example intentionally and fix it.
3. Write this note: "What real C problem does this level help me solve?"
4. Move to the next level.

## Quick Navigation

| Go To | Link |
| --- | --- |
| Repository home | [`../README.md`](../README.md) |
| English reference index | [`REFERENCE_INDEX.md`](REFERENCE_INDEX.md) |
| LeetCode bridge | [`notes/leetcode_bridge.md`](notes/leetcode_bridge.md) |
