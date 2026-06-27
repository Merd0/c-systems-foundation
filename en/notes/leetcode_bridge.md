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
| [#3300 Minimum Element After Replacement With Digit Sum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3300-minimum-element-after-replacement-with-digit-sum) | Array scan, digit sum simulation |
| [#961 N-Repeated Element in Size 2N Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0961-n-repeated-element-in-size-2n-array) | Frequency array, first repeated value |
| [#1266 Minimum Time Visiting All Points](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1266-minimum-time-visiting-all-points) | Coordinate scan, Chebyshev distance |
| [#1984 Minimum Difference Between Highest and Lowest of K Scores](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1984-minimum-difference-between-highest-and-lowest-of-k-scores) | Sort, then scan `k`-sized windows |
| [#3507 Minimum Pair Removal to Sort Array I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3507-minimum-pair-removal-to-sort-array-i) | In-place simulation, adjacent pair merge |
| [#2126 Destroying Asteroids](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2126-destroying-asteroids) | Sort, then greedily accumulate mass |
| [#2144 Minimum Cost of Buying Candies With Discount](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2144-minimum-cost-of-buying-candies-with-discount) | Descending sort, grouped greedy discount |
| [#3633 Earliest Finish Time for Land and Water Rides I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3633-earliest-finish-time-for-land-and-water-rides-i) | Enumerate pairs and both execution orders |
| [#3635 Earliest Finish Time for Land and Water Rides II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3635-earliest-finish-time-for-land-and-water-rides-ii) | Precompute earliest first ride finish, then scan the second category |
| [#189 Rotate Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0189-rotate-array) | Three-reversal in-place array rotation |
| [#3751 Total Waviness of Numbers in Range I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3751-total-waviness-of-numbers-in-range-i) | Small-constraint enumeration and digit scanning |
| [#2574 Left and Right Sum Differences](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2574-left-and-right-sum-differences) | Total sum with a running left-side accumulator |
| [#1732 Find the Highest Altitude](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1732-find-the-highest-altitude) | Running prefix altitude and maximum tracking |
| [#1464 Maximum Product of Two Elements in an Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1464-maximum-product-of-two-elements-in-an-array) | Track the largest two values in a single pass |
| [#1346 Check If N and Its Double Exist](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1346-check-if-n-and-its-double-exist) | Pair scan with distinct indices and double relation |
| [#941 Valid Mountain Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0941-valid-mountain-array) | State-free climb/peak/descend array validation |
| [#2161 Partition Array According to Given Pivot](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2161-partition-array-according-to-given-pivot) | Stable three-way partition into a new array |
| [#3689 Maximum Total Subarray Value I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3689-maximum-total-subarray-value-i) | Global min/max scan and repeated optimal choice |
| [#1827 Minimum Operations to Make the Array Increasing](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1827-minimum-operations-to-make-the-array-increasing) | Greedy in-place update based on the previous element |
| [#3737 Count Subarrays With Majority Element I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3737-count-subarrays-with-majority-element-i) | Nested subarray enumeration and majority condition |
| [#238 Product of Array Except Self](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0238-product-of-array-except-self) | Prefix and suffix accumulators without division |
| [#75 Sort Colors](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0075-sort-colors) | Counting write-back and in-place three-way partition |
| [#1979 Find Greatest Common Divisor of Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1979-find-greatest-common-divisor-of-array) | Safe min/max initialization and descending divisor search |
| [#287 Find the Duplicate Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0287-find-the-duplicate-number) | Frequency table first, then array-as-linked-list cycle detection |
| [#152 Maximum Product Subarray](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0152-maximum-product-subarray) | Carrying max/min running state because negative products flip roles |

Ask yourself:
- How is the array length passed to the function?
- Which solutions modify the input array?
- What changes when the solution returns a new array instead?
- Where does the real cost come from in a nested number/digit loop?
- When is a direct simulation good enough because the constraints are small?

## Matrix And 2D Arrays

Related folders:
- `../arrays/`
- `../memory_management/`

| Problem | Focus |
|---|---|
| [#54 Spiral Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0054-spiral-matrix) | Four-boundary traversal |
| [#59 Spiral Matrix II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0059-spiral-matrix-ii) | Allocating and filling a 2D result |
| [#73 Set Matrix Zeroes](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0073-set-matrix-zeroes) | Row and column marker arrays |
| [#48 Rotate Image](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0048-rotate-image) | In-place transpose and row reverse |
| [#289 Game of Life](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0289-game-of-life) | Encoding temporary states inside the matrix |
| [#832 Flipping an Image](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0832-flipping-an-image) | Reverse and invert each binary row in one pass |
| [#1582 Special Positions in a Binary Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1582-special-positions-in-a-binary-matrix) | Row and column counting around a candidate cell |

Ask yourself:
- Is the matrix returned as a new allocation or modified in place?
- Which variables represent row and column boundaries?
- When does a cell need to preserve both old and new state?

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
| [#443 String Compression](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0443-string-compression) | In-place read/write buffer compression |
| [#1662 Check If Two String Arrays are Equivalent](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1662-check-if-two-string-arrays-are-equivalent) | Comparing fragmented strings as character streams without allocation |
| [#1773 Count Items Matching a Rule](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1773-count-items-matching-a-rule) | `char***` item table, rule-to-column mapping, `strcmp` |

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
| [#287 Find the Duplicate Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0287-find-the-duplicate-number) | Floyd slow/fast pointer idea applied to array indices |
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
| [#622 Design Circular Queue](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0622-design-circular-queue) | Struct-owned circular buffer |
| [#641 Design Circular Deque](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0641-design-circular-deque) | Front/rear state with modulo movement |
| [#705 Design HashSet](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0705-design-hashset) | Direct-address presence table |
| [#706 Design HashMap](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0706-design-hashmap) | Separate value and existence arrays |
| [#707 Design Linked List](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0707-design-linked-list) | Dummy-head linked-list API |
| [#1603 Design Parking System](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1603-design-parking-system) | Small struct-owned counters and state transitions |
| [#933 Number of Recent Calls](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0933-number-of-recent-calls) | Queue window over increasing timestamps |
| [#303 Range Sum Query - Immutable](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0303-range-sum-query-immutable) | Struct-owned prefix buffer and cleanup |

Ask yourself:
- What state does the struct own?
- Do functions receive the struct by value or by pointer?
- Which links change when a node is removed?
- Which heap buffers must be freed by the custom `Free` function?
- Why does a `size` field make circular buffers easier to reason about?
- Why does a direct-address table need a separate existence marker?

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
| [#1512 Number of Good Pairs](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1512-number-of-good-pairs) | Equal-value pair counting, frequency optimization path |
| [#49 Group Anagrams](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0049-group-anagrams) | Key generation, sorting strings |
| [#560 Subarray Sum Equals K](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0560-subarray-sum-equals-k) | Prefix sum + custom hash table |
| [#1207 Unique Number of Occurrences](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1207-unique-number-of-occurrences) | Fixed frequency array with negative-value offset, then duplicate count detection |
| [#1748 Sum of Unique Elements](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1748-sum-of-unique-elements) | Small fixed frequency table and count-one values |
| [#287 Find the Duplicate Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0287-find-the-duplicate-number) | Frequency array solution and O(1) memory alternative |
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
| [#1456 Maximum Number of Vowels in a Substring of Given Length](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1456-maximum-number-of-vowels-in-a-substring-of-given-length) | Fixed-size window with one entering and one leaving character |

Ask yourself:
- Is the window fixed-size or variable-size?
- When is the window valid or invalid?
- Which condition moves the left pointer?

## Bitwise

Related folders:
- `../bitwise/`

| Problem | Focus |
|---|---|
| [#191 Number of 1 Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0191-number-of-1-bits) | Counting set bits |
| [#231 Power of Two](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0231-power-of-two) | Single set bit check |
| [#461 Hamming Distance](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0461-hamming-distance) | Finding different bits with XOR |
| [#476 Number Complement](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0476-number-complement) | Building a mask and flipping bits |
| [#190 Reverse Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0190-reverse-bits) | 32-bit shifts and bit order |
| [#405 Convert a Number to Hexadecimal](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0405-convert-a-number-to-hexadecimal) | 4-bit nibbles and hex representation |
| [#3314 Construct the Minimum Bitwise Array I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3314-construct-the-minimum-bitwise-array-i) | Testing the `x | (x + 1)` bit pattern |
| [#338 Counting Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0338-counting-bits) | Repeated set-bit counting |
| [#342 Power of Four](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0342-power-of-four) | Base-4 divisibility check |
| [#389 Find the Difference](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0389-find-the-difference) | XOR cancellation on characters |
| [#868 Binary Gap](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0868-binary-gap) | Track positions while shifting |
| [#693 Binary Number with Alternating Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0693-binary-number-with-alternating-bits) | Compare adjacent bits |
| [#1342 Number of Steps to Reduce a Number to Zero](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1342-number-of-steps-to-reduce-a-number-to-zero) | Even/odd reduction loop |
| [#2220 Minimum Bit Flips to Convert Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2220-minimum-bit-flips-to-convert-number) | XOR difference mask, count set bits |
| [#2595 Number of Even and Odd Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2595-number-of-even-and-odd-bits) | Count set bits by bit position parity |
| [#371 Sum of Two Integers](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0371-sum-of-two-integers) | XOR sum and shifted carry |
| [#201 Bitwise AND of Numbers Range](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0201-bitwise-and-of-numbers-range) | Common binary prefix across a range |
| [#137 Single Number II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0137-single-number-ii) | Sorting fallback, bit-count alternative |
| [#260 Single Number III](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0260-single-number-iii) | Sorting fallback, XOR partition alternative |
| [#1318 Minimum Flips to Make a OR b Equal to c](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1318-minimum-flips-to-make-a-or-b-equal-to-c) | Bit-by-bit OR condition checks |
| [#1310 XOR Queries of a Subarray](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1310-xor-queries-of-a-subarray) | Prefix XOR and cancellation across ranges |
| [#1486 XOR Operation in an Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1486-xor-operation-in-an-array) | Generate a numeric sequence and accumulate XOR |
| [#318 Maximum Product of Word Lengths](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0318-maximum-product-of-word-lengths) | 26-bit masks for word letters |
| [#136 Single Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0136-single-number) | XOR cancellation |
| [#268 Missing Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0268-missing-number) | Finding a missing value with XOR |

Ask yourself:
- Why does `x ^ x` become 0?
- Why does XOR order not matter here?
- Why do these solutions need no extra memory?
- Why does `n & (n - 1)` clear the rightmost set bit?
- Why does each hexadecimal character represent 4 bits?

## Integer Parsing And Byte-Level Work

Related folders:
- `../strings_parsing/`
- `../bitwise/`
- `../operators/`

| Problem | Focus |
|---|---|
| [#67 Add Binary](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0067-add-binary) | Binary string addition, carry propagation |
| [#7 Reverse Integer](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0007-reverse-integer) | 32-bit overflow guard before multiplication |
| [#8 String to Integer (atoi)](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0008-string-to-integer-atoi) | Parser phases, sign handling, integer clamp |
| [#393 UTF-8 Validation](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0393-utf-8-validation) | Byte prefix validation and continuation bytes |
| [#717 1-bit and 2-bit Characters](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0717-1-bit-and-2-bit-characters) | Variable-length bit-stream parsing |
| [#165 Compare Version Numbers](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0165-compare-version-numbers) | Parse dotted integer revisions without allocating substrings |
| [#468 Validate IP Address](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0468-validate-ip-address) | IPv4 and IPv6 parser rules |
| [#43 Multiply Strings](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0043-multiply-strings) | Manual digit buffer multiplication |
| [#65 Valid Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0065-valid-number) | Numeric parser state flags |

Ask yourself:
- What state does the parser need to remember?
- Which operation can overflow before the final result is assigned?
- How can a few high bits describe the shape of a byte sequence?

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
