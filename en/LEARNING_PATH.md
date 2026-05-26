# C Systems Foundation Learning Path

This file is the main control panel for the repository. You can keep only this
page open, move through the material in order, click into every topic, and come
back here without losing your place.

## How To Use It

1. Follow the steps in order; do not skip ahead too early.
2. Open the "Lesson page" link first; backward and forward navigation lives there.
3. From the lesson page, open the source, read it, predict the output, then compile
   and run it.
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

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 1 | [Lesson 1: Build Guide](study/001-build-guide.md) | How the repo builds and what CI checks | You can explain why `make all` and `make test` exist |
| 2 | [Lesson 2: Build Run Main Debugging](study/002-build-run-main-debugging.md) | `main`, build, run, debug loop | You can explain how a source file becomes runnable |

## Level 1: Core Syntax

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 3 | [Lesson 3: Variables Basics](study/003-variables-basics.md) | Variables, basic types, formatted output | You can match types with format specifiers |
| 4 | [Lesson 4: Printf Examples](study/004-printf-examples.md) | `printf`, alignment, readable output | You can write your own formatted output |
| 5 | [Lesson 5: Scanf Usage](study/005-scanf-usage.md) | Input and return-value checks | You can reject invalid input deliberately |
| 6 | [Lesson 6: Arithmetic Ops](study/006-arithmetic-ops.md) | Arithmetic operators and precedence | You can explain integer division behavior |
| 7 | [Lesson 7: Casting Examples](study/007-casting-examples.md) | Casts, data loss, conversion rules | You know when an explicit cast is needed |
| 8 | [Lesson 8: Bool Const Define Sizeof](study/008-bool-const-define-sizeof.md) | `bool`, `const`, `#define`, `sizeof` | You can explain the difference between constants and macros |
| 9 | [Lesson 9: Math Library Examples](study/009-math-library-examples.md) | `math.h` and `-lm` linking | You know why math functions may need linker flags |

## Level 2: Control Flow And Loops

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 10 | [Lesson 10: If Else Examples](study/010-if-else-examples.md) | Decisions and guard conditions | You handle invalid input before main logic |
| 11 | [Lesson 11: Switch Case Examples](study/011-switch-case-examples.md) | Menus and fixed choices | You can build a small `switch` menu |
| 12 | [Lesson 12: For While Do Examples](study/012-for-while-do-examples.md) | `for`, `while`, `do-while` differences | You can explain why you chose a loop type |
| 13 | [Lesson 13: Break Continue Rand](study/013-break-continue-rand.md) | `break`, `continue`, basic randomness | You can deliberately change loop flow |

## Level 3: Arrays, Strings, And Functions

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 14 | [Lesson 14: Arrays And Strings Basics](study/014-arrays-and-strings-basics.md) | Array indexes, char arrays, `'\0'` | You can explain where a C string ends |
| 15 | [Lesson 15: Multidimensional Arrays](study/015-multidimensional-arrays.md) | 2D arrays and row/column traversal | You can traverse a matrix in row-major order |
| 16 | [Lesson 16: Functions Intro Return](study/016-functions-intro-return.md) | Functions, parameters, return values | You can write a small single-purpose function |
| 17 | [Lesson 17: Array Parameter Examples](study/017-array-parameter-examples.md) | Array parameters and size passing | You remember to pass size together with arrays |
| 18 | [Lesson 18: Palindrome Solution](study/018-palindrome-solution.md) | Splitting problem logic into functions | You can keep checking logic outside `main` |
| 19 | [Lesson 19: Header Usage Example](study/019-header-usage-example.md) | Headers, declarations, includes | You can explain the role of a `.h` file |

## Level 4: Pointers

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 20 | [Lesson 20: Pointers Overview](study/020-pointers-overview.md) | Pointer mental model | You can explain address, value, and dereference |
| 21 | [Lesson 21: Call By Value Reference](study/021-call-by-value-reference.md) | Value/reference behavior | You know when a function changes caller data |
| 22 | [Lesson 22: Null Pointer And Array](study/022-null-pointer-and-array.md) | `NULL`, array-pointer relationship | You can explain why `NULL` checks matter |
| 23 | [Lesson 23: Pointer Arithmetic Walkthrough](study/023-pointer-arithmetic-walkthrough.md) | Pointer arithmetic | You know why `ptr + 1` moves by element size |
| 24 | [Lesson 24: Const Pointer Parameters](study/024-const-pointer-parameters.md) | `const` pointer parameters | You can express function contracts with `const` |
| 25 | [Lesson 25: Dangling Pointer Warning](study/025-dangling-pointer-warning.md) | Dangling pointer risk | You know why expired addresses are dangerous |

## Level 5: Structs And Unions

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 26 | [Lesson 26: Structs Overview](study/026-structs-overview.md) | Struct use cases | You know when to choose a struct over parallel arrays |
| 27 | [Lesson 27: Struct Intro And Array](study/027-struct-intro-and-array.md) | Struct definitions and struct arrays | You can store multiple records in a struct array |
| 28 | [Lesson 28: Struct Pointer Update](study/028-struct-pointer-update.md) | Updating through struct pointers | You use `.` and `->` correctly |
| 29 | [Lesson 29: Struct Designated Initializers](study/029-struct-designated-initializers.md) | Designated initializers | You can initialize fields by name |
| 30 | [Lesson 30: Struct Nested And Const](study/030-struct-nested-and-const.md) | Nested structs and `const` | You can model nested data readably |
| 31 | [Lesson 31: Struct Padding Alignment](study/031-struct-padding-alignment.md) | Padding, alignment, layout | You know why struct size can exceed field totals |
| 32 | [Lesson 32: Unions Overview](study/032-unions-overview.md) | Union mental model | You can explain shared storage |
| 33 | [Lesson 33: Union Size Overlay](study/033-union-size-overlay.md) | Overlay and size behavior | You know union size follows the largest member |
| 34 | [Lesson 34: Tagged Union Variant](study/034-tagged-union-variant.md) | Tagged unions | You can track the active union member with a tag |
| 35 | [Lesson 35: Protocol Message Union](study/035-protocol-message-union.md) | Protocol/message model | You can read a union inside a real message model |

## Level 6: Dynamic Memory

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 36 | [Lesson 36: Memory Management Overview](study/036-memory-management-overview.md) | Heap, lifetime, ownership | You can answer who owns each allocation |
| 37 | [Lesson 37: Union Example](study/037-union-example.md) | Memory overlay review | You can revisit shared-memory behavior |
| 38 | [Lesson 38: Malloc Calloc Free Examples](study/038-malloc-calloc-free-examples.md) | `malloc`, `calloc`, `free` | You plan exactly one `free` for each allocation |
| 39 | [Lesson 39: Realloc Growth Buffer](study/039-realloc-growth-buffer.md) | Safe growing buffers | You check `realloc` through a temporary pointer |
| 40 | [Lesson 40: Ownership Transfer](study/040-ownership-transfer.md) | Ownership transfer | You can state who must free returned heap memory |

## Level 7: Practical Data Structures

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 41 | [Lesson 41: Data Structures Overview](study/041-data-structures-overview.md) | Container thinking in C | You can compare arrays, dynamic arrays, and linked lists |
| 42 | [Lesson 42: Dynamic Array](study/042-dynamic-array.md) | Vector-like growth | You know the difference between size and capacity |
| 43 | [Lesson 43: Singly Linked List](study/043-singly-linked-list.md) | Singly linked lists | You can trace insert/search/delete/free |
| 44 | [Lesson 44: Doubly Linked List](study/044-doubly-linked-list.md) | Doubly linked lists | You can update `prev` and `next` safely |
| 45 | [Lesson 45: Intrusive Linked List](study/045-intrusive-linked-list.md) | Intrusive lists | You understand list nodes embedded in objects |

## Level 8: Practical C Interfaces

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 46 | [Lesson 46: Function Pointers Overview](study/046-function-pointers-overview.md) | Function pointers and callbacks | You know why a function can be passed like data |
| 47 | [Lesson 47: Callbacks And Dispatch Table](study/047-callbacks-and-dispatch-table.md) | Dispatch tables | You can select behavior through a table |
| 48 | [Lesson 48: Error Handling Overview](study/048-error-handling-overview.md) | Error models in C | You understand status return plus output parameter |
| 49 | [Lesson 49: Status Code Result](study/049-status-code-result.md) | Status-code pattern | You can carry errors and results cleanly |
| 50 | [Lesson 50: Strings Parsing Overview](study/050-strings-parsing-overview.md) | Safe string parsing | You can explain why `strtol` is safer than `atoi` |
| 51 | [Lesson 51: Safe Token Parsing](study/051-safe-token-parsing.md) | Token and number parsing | You do not silently accept invalid tokens |
| 52 | [Lesson 52: Modular Design Overview](study/052-modular-design-overview.md) | Modular C APIs | You understand header/implementation separation |
| 53 | [Lesson 53: Opaque Handle Pattern](study/053-opaque-handle-pattern.md) | Opaque handles | You can hide struct internals behind an API |

## Level 9: File I/O, Preprocessor, And Bitwise Work

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 54 | [Lesson 54: File Io Overview](study/054-file-io-overview.md) | Opening, reading, writing files | You check `fopen` and always close files |
| 55 | [Lesson 55: File Write Read Examples](study/055-file-write-read-examples.md) | Basic read/write | You can write output and read it back |
| 56 | [Lesson 56: Line Based Records](study/056-line-based-records.md) | Line-based records | You can parse records with `fgets` |
| 57 | [Lesson 57: Binary Record Io](study/057-binary-record-io.md) | Binary record I/O | You know binary and text formats differ |
| 58 | [Lesson 58: Preprocessor Overview](study/058-preprocessor-overview.md) | Preprocessor mental model | You know macros run before compilation |
| 59 | [Lesson 59: Macro Constants And Guards](study/059-macro-constants-and-guards.md) | Macro constants and include guards | You can explain header guards |
| 60 | [Lesson 60: Macro Pitfalls](study/060-macro-pitfalls.md) | Macro risks | You know why macro arguments need parentheses |
| 61 | [Lesson 61: Conditional Compilation](study/061-conditional-compilation.md) | Conditional compilation | You can include/exclude code through build flags |
| 62 | [Lesson 62: Bitwise Overview](study/062-bitwise-overview.md) | Bitwise mental model | You can distinguish flags, masks, and shifts |
| 63 | [Lesson 63: Permission Flags](study/063-permission-flags.md) | Permission flags | You can store permissions in bits |
| 64 | [Lesson 64: Bit Masks And Packing](study/064-bit-masks-and-packing.md) | Masks and packing | You can pack and extract a value |
| 65 | [Lesson 65: Xor Toggle Demo](study/065-xor-toggle-demo.md) | XOR toggle | You know XOR toggle/cancel behavior |

## Level 10: Algorithms, Problem Solving, And Projects

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 66 | [Lesson 66: Char Frequency](study/066-char-frequency.md) | Frequency arrays | You can count characters with a small array |
| 67 | [Lesson 67: Most Frequent Character](study/067-most-frequent-character.md) | Max frequency | You can select a result from counts |
| 68 | [Lesson 68: Search Algorithms](study/068-search-algorithms.md) | Linear/binary search | You choose binary search for sorted data |
| 69 | [Lesson 69: Sorting Algorithms](study/069-sorting-algorithms.md) | Sorting logic | You can trace simple sorting steps |
| 70 | [Lesson 70: Luhn Validator](study/070-luhn-validator.md) | Real algorithm implementation | You can translate a rule set into code |
| 71 | [Lesson 71: Problem Solving](study/071-problem-solving.md) | Small scenario problems | You have modified and run at least two examples |
| 72 | [Lesson 72: Library Management Cli](study/072-library-management-cli.md) | Single-file CLI project | You can read menu, struct array, and input flow |
| 73 | [Lesson 73: Library Management File Persist](study/073-library-management-file-persist.md) | File persistence project | You know how data survives program exit |
| 74 | [Lesson 74: Library Management Modular](study/074-library-management-modular.md) | Modular project layout | You understand `include/`, `src/`, and `tests/` |

## Level 11: LeetCode Practice Bridge

| Step | Lesson page | Focus | Done when |
| --- | --- | --- | --- |
| 75 | [Lesson 75: Leetcode Bridge](study/075-leetcode-bridge.md) | Connect C topics to LeetCode practice | You can create a review plan from selected problems |

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
