# LeetCode Bridge

This document connects the C topics in this repository with selected practice
problems from `leetcode-c-solutions`.

This is not a random problem list. Study the C topic first, then review or solve
the related LeetCode problems with this question in mind:

> Which C concept is this problem actually exercising?

LeetCode archive:
[Merd0/leetcode-c-solutions](https://github.com/Merd0/leetcode-c-solutions)

Solved problems table:
[SOLVED_PROBLEMS.md](https://github.com/Merd0/leetcode-c-solutions/blob/main/docs/SOLVED_PROBLEMS.md)

## How To Use

1. Read the related topic in this repository and compile its examples.
2. Move to the LeetCode problems listed under that topic.
3. Focus on the C mechanism, not only on getting accepted.
4. For problems using `malloc`, pointers, in-place updates, or hash/frequency
   tables, write down the memory and ownership behavior.
5. If a problem feels hard, identify the missing C topic before memorizing the
   solution.

## Arrays

Related folders:
- `../arrays/`
- `../functions/array_parameter_examples.c`
- `../algorithms/`

| Problem | Focus |
|---|---|
| [#1920 Build Array from Permutation](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1920-build-array-from-permutation) | Indexing, array read/write |
| [#1480 Running Sum of 1d Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1480-running-sum-of-1d-array) | Prefix sum, one-pass scan |
| [#283 Move Zeroes](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0283-move-zeroes) | In-place compaction |
| [#448 Find All Numbers Disappeared in an Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0448-find-all-numbers-disappeared-in-an-array) | Index marking, using the array as state |

Ask yourself:
- How is the array length passed to the function?
- Which solutions modify the input array?
- What changes when the solution returns a new array instead?

## Strings And Character Arrays

Related folders:
- `../arrays/`
- `../functions/`
- `../strings_parsing/`
- `../algorithms/char_frequency.c`

| Problem | Focus |
|---|---|
| [#344 Reverse String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0344-reverse-string) | In-place swap on a character array |
| [#125 Valid Palindrome](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0125-valid-palindrome) | Two pointers, character filtering |
| [#242 Valid Anagram](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0242-valid-anagram) | 26-slot frequency array |
| [#387 First Unique Character in a String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0387-first-unique-character-in-a-string) | Count first, scan second |
| [#438 Find All Anagrams in a String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0438-find-all-anagrams-in-a-string) | Sliding window + character frequency |

Ask yourself:
- Where does a C string end?
- When is `strlen` enough, and when is scanning until `'\0'` better?
- Why is a frequency array enough instead of a hash table?

## Pointers

Related folders:
- `../pointers/`
- `../data_structures/singly_linked_list.c`

| Problem | Focus |
|---|---|
| [#344 Reverse String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0344-reverse-string) | In-place updates and address thinking |
| [#21 Merge Two Sorted Lists](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0021-merge-two-sorted-lists) | Linking node pointers |
| [#206 Reverse Linked List](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0206-reverse-linked-list) | `prev/current/next` pointer model |
| [#19 Remove Nth Node From End of List](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0019-remove-nth-node-from-end-of-list) | Dummy node, head may change |

Ask yourself:
- Which pointer owns memory, and which pointer only walks through data?
- What happens to the list when `current->next` changes?
- Why does a dummy node simplify deleting the head?

## Dynamic Memory And Ownership

Related folders:
- `../memory_management/`
- `../data_structures/dynamic_array.c`

| Problem | Focus |
|---|---|
| [#566 Reshape the Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0566-reshape-the-matrix) | Allocating a 2D result, return-size metadata |
| [#867 Transpose Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0867-transpose-matrix) | Pointer-to-pointer matrix result |
| [#88 Merge Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0088-merge-sorted-array) | Merge from the back without extra allocation |
| [#2 Add Two Numbers](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0002-add-two-numbers) | Allocating new linked-list nodes |
| [#239 Sliding Window Maximum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0239-sliding-window-maximum) | Temporary heap buffer and cleanup |

Ask yourself:
- Which functions return memory that the caller must free?
- What should happen if allocation fails?
- How is the returned size communicated to the caller?

## Structs And Data Structures

Related folders:
- `../structs/`
- `../data_structures/`

| Problem | Focus |
|---|---|
| [#155 Min Stack](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0155-min-stack) | Keeping state inside a struct |
| [#232 Implement Queue using Stacks](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0232-implement-queue-using-stacks) | Two-stack queue state |
| [#225 Implement Stack using Queues](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0225-implement-stack-using-queues) | Queue behavior used as stack behavior |
| [#21 Merge Two Sorted Lists](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0021-merge-two-sorted-lists) | Linked-list node structure |
| [#82 Remove Duplicates from Sorted List II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0082-remove-duplicates-from-sorted-list-ii) | Removing duplicate groups, pointer rewiring |

Ask yourself:
- What state does the struct own?
- Do functions receive the struct by value or by pointer?
- Which links change when a node is removed?

## Search And Binary Search

Related folders:
- `../algorithms/search_algorithms.c`

| Problem | Focus |
|---|---|
| [#704 Binary Search](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0704-binary-search) | Standard binary search |
| [#34 Find First and Last Position](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0034-find-first-and-last-position-of-element-in-sorted-array) | Boundary search |
| [#33 Search in Rotated Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0033-search-in-rotated-sorted-array) | Detecting the sorted half |
| [#153 Find Minimum in Rotated Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0153-find-minimum-in-rotated-sorted-array) | `left < right` binary search model |

Ask yourself:
- What is the difference between `left <= right` and `left < right`?
- Why use `mid = left + (right - left) / 2`?
- Why do boundary searches keep going after finding a match?

## Hash And Frequency

Related folders:
- `../algorithms/char_frequency.c`
- `../algorithms/most_frequent_character.c`

| Problem | Focus |
|---|---|
| [#169 Majority Element](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0169-majority-element) | Sorting as a frequency shortcut |
| [#349 Intersection of Two Arrays](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0349-intersection-of-two-arrays) | Unique result checks |
| [#49 Group Anagrams](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0049-group-anagrams) | Key generation, sorting strings |
| [#560 Subarray Sum Equals K](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0560-subarray-sum-equals-k) | Prefix sum + custom hash table |
| [#3120 Count the Number of Special Characters I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3120-count-the-number-of-special-characters-i) | Lowercase and uppercase presence arrays |
| [#3121 Count the Number of Special Characters II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3121-count-the-number-of-special-characters-ii) | Lowercase and uppercase ordering with index arrays |

Ask yourself:
- When is a frequency array enough instead of a hash table?
- How is the key represented?
- What should be considered when hashing negative keys?

## Trie And Suffix Matching

Related folders:
- `../data_structures/`
- `../strings_parsing/`
- `../algorithms/`

| Problem | Focus |
|---|---|
| [#3093 Longest Common Suffix Queries](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3093-longest-common-suffix-queries) | Reversed trie, storing the best index inside each node |

Ask yourself:
- Why does reading a string backward turn suffix matching into prefix matching?
- When is a `child[26]` array enough instead of a hash table?
- How does storing `bestIndex` in each node avoid extra searching during queries?

## Sliding Window

Related folders:
- `../algorithms/`
- `../strings_parsing/`

| Problem | Focus |
|---|---|
| [#643 Maximum Average Subarray I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0643-maximum-average-subarray-i) | Fixed-size window |
| [#1004 Max Consecutive Ones III](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1004-max-consecutive-ones-iii) | Move left when the constraint breaks |
| [#209 Minimum Size Subarray Sum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0209-minimum-size-subarray-sum) | Shrink while the sum is enough |
| [#76 Minimum Window Substring](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0076-minimum-window-substring) | Cover then shrink model |
| [#239 Sliding Window Maximum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0239-sliding-window-maximum) | Monotonic deque |

Ask yourself:
- Is the window fixed-size or variable-size?
- When is the window valid or invalid?
- Which condition moves the left pointer?

## Bitwise

Related folders:
- `../bitwise/`

| Problem | Focus |
|---|---|
| [#136 Single Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0136-single-number) | XOR cancellation |
| [#268 Missing Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0268-missing-number) | Finding a missing value with XOR |

Ask yourself:
- Why does `x ^ x` become 0?
- Why does XOR order not matter here?
- Why do these solutions need no extra memory?

## Recursion And Trees

Related folders:
- `../data_structures/`
- `../algorithms/`

| Problem | Focus |
|---|---|
| [#104 Maximum Depth of Binary Tree](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0104-maximum-depth-of-binary-tree) | Recursive depth calculation |
| [#226 Invert Binary Tree](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0226-invert-binary-tree) | Recursive child swap |

Ask yourself:
- Where is the base case?
- Which smaller subproblem does the recursive call solve?
- How does the parent use the returned value?

## Suggested Study Loop

1. Study the C topic in this repository.
2. Pick 2 easy problems and 1 medium problem from the bridge section.
3. Try solving them without looking first.
4. Review `leetcode-c-solutions` and focus on the C mechanism.
5. Write one sentence: "This problem taught me this C idea."

---

| Back | Extra Reference |
| --- | --- |
| [Back To Learning Path](../LEARNING_PATH.md) | [Reference Index](../REFERENCE_INDEX.md) |
