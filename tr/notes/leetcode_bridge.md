# LeetCode Köprüsü

Bu dokümanın amacı, bu repoda çalıştığın C konularını
`leetcode-c-solutions` reposundaki seçilmiş problemlerle pekiştirmektir.

Bu liste bir "rastgele soru listesi" değil. Her başlıkta önce C konusunu
çalış, sonra ilgili LeetCode problemini şu soruyla tekrar et:

> Bu problemde hangi C konusu gerçekten kullanılıyor?

LeetCode arşivi:
[Merd0/leetcode-c-solutions](https://github.com/Merd0/leetcode-c-solutions)

Solved problems tablosu:
[SOLVED_PROBLEMS.md](https://github.com/Merd0/leetcode-c-solutions/blob/main/docs/SOLVED_PROBLEMS.md)

## Nasıl Kullanılır?

1. Önce bu repodaki ilgili konuyu oku ve örnekleri derle.
2. Sonra aşağıdaki LeetCode problemlerini çözmeye veya tekrar etmeye geç.
3. Çözümde sadece sonucu değil, C tarafındaki mekaniği not al.
4. `malloc`, pointer, in-place update veya hash/frequency kullanan sorularda
   bellek ve ownership mantığını ayrıca açıkla.
5. Zorlandığın soruyu direkt ezberleme; önce hangi C konusunun eksik kaldığını
   bul.

## Arrays

İlgili klasörler:
- `../arrays/`
- `../functions/array_parameter_examples.c`
- `../algorithms/`

| Problem | Odak |
|---|---|
| [#1920 Build Array from Permutation](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1920-build-array-from-permutation) | Index kullanımı, dizi okuma/yazma |
| [#1480 Running Sum of 1d Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1480-running-sum-of-1d-array) | Prefix sum, tek geçiş |
| [#283 Move Zeroes](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0283-move-zeroes) | In-place compaction |
| [#448 Find All Numbers Disappeared in an Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0448-find-all-numbers-disappeared-in-an-array) | Index marking, array'i işaretleme alanı gibi kullanma |

Kendine sor:
- Dizi boyutu fonksiyona nasıl taşınıyor?
- Hangi çözüm input array'i değiştiriyor?
- In-place çözüm ile yeni array döndüren çözüm arasındaki fark ne?

## Strings And Character Arrays

İlgili klasörler:
- `../arrays/`
- `../functions/`
- `../strings_parsing/`
- `../algorithms/char_frequency.c`

| Problem | Odak |
|---|---|
| [#344 Reverse String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0344-reverse-string) | Karakter array'i üzerinde in-place swap |
| [#125 Valid Palindrome](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0125-valid-palindrome) | İki pointer, karakter filtreleme |
| [#242 Valid Anagram](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0242-valid-anagram) | 26 elemanlı frequency array |
| [#387 First Unique Character in a String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0387-first-unique-character-in-a-string) | Önce say, sonra tara modeli |
| [#438 Find All Anagrams in a String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0438-find-all-anagrams-in-a-string) | Sliding window + character frequency |

Kendine sor:
- C string'i nerede biter?
- `strlen` kullanmak ile `'\0'` görene kadar dönmek arasında ne fark var?
- Frequency array neden hash table yerine yeterli oluyor?

## Pointers

İlgili klasörler:
- `../pointers/`
- `../data_structures/singly_linked_list.c`

| Problem | Odak |
|---|---|
| [#344 Reverse String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0344-reverse-string) | In-place update, adres mantigi |
| [#21 Merge Two Sorted Lists](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0021-merge-two-sorted-lists) | Node pointer bağlama |
| [#206 Reverse Linked List](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0206-reverse-linked-list) | `prev/current/next` pointer modeli |
| [#19 Remove Nth Node From End of List](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0019-remove-nth-node-from-end-of-list) | Dummy node, head değişebilir durumu |

Kendine sor:
- Hangi pointer owning, hangi pointer sadece gezinme amaçlı?
- `current->next` değiştiğinde liste yapısı nasıl değişiyor?
- Head silinirse neden dummy node iş görür?

## Dynamic Memory And Ownership

İlgili klasörler:
- `../memory_management/`
- `../data_structures/dynamic_array.c`

| Problem | Odak |
|---|---|
| [#566 Reshape the Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0566-reshape-the-matrix) | 2D array allocate etme, return size bilgisi |
| [#867 Transpose Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0867-transpose-matrix) | Pointer-to-pointer matrix sonucu |
| [#88 Merge Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0088-merge-sorted-array) | Ek allocation yapmadan sondan merge |
| [#2 Add Two Numbers](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0002-add-two-numbers) | Yeni linked-list node allocate etme |
| [#239 Sliding Window Maximum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0239-sliding-window-maximum) | Temporary heap buffer ve cleanup |

Kendine sor:
- Hangi fonksiyon caller'ın `free` etmesi gereken bellek döndürüyor?
- Allocation failure olursa ne olurdu?
- Sonuç boyutu caller'a nasıl bildiriliyor?

## Structs And Data Structures

İlgili klasörler:
- `../structs/`
- `../data_structures/`

| Problem | Odak |
|---|---|
| [#155 Min Stack](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0155-min-stack) | Struct ile state tutma |
| [#232 Implement Queue using Stacks](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0232-implement-queue-using-stacks) | Struct içinde iki stack modeli |
| [#225 Implement Stack using Queues](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0225-implement-stack-using-queues) | Queue davranışını stack gibi kullanma |
| [#21 Merge Two Sorted Lists](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0021-merge-two-sorted-lists) | Linked list node yapısı |
| [#82 Remove Duplicates from Sorted List II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0082-remove-duplicates-from-sorted-list-ii) | Duplicate group silme, pointer rewiring |

Kendine sor:
- Struct hangi state'i saklıyor?
- Fonksiyonlar struct'ı value ile mi pointer ile mi alıyor?
- Listede node silerken hangi linkler değişiyor?

## Search And Binary Search

İlgili klasörler:
- `../algorithms/search_algorithms.c`

| Problem | Odak |
|---|---|
| [#704 Binary Search](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0704-binary-search) | Klasik binary search |
| [#34 Find First and Last Position](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0034-find-first-and-last-position-of-element-in-sorted-array) | Boundary search |
| [#33 Search in Rotated Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0033-search-in-rotated-sorted-array) | Sıralı yarıyı tespit etme |
| [#153 Find Minimum in Rotated Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0153-find-minimum-in-rotated-sorted-array) | `left < right` binary search modeli |

Kendine sor:
- `left <= right` ile `left < right` farkı ne?
- `mid = left + (right - left) / 2` neden tercih edilir?
- Boundary ararken match bulunca neden hemen return etmiyoruz?

## Hash And Frequency

İlgili klasörler:
- `../algorithms/char_frequency.c`
- `../algorithms/most_frequent_character.c`

| Problem | Odak |
|---|---|
| [#169 Majority Element](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0169-majority-element) | Sorting ile frequency sonucu |
| [#349 Intersection of Two Arrays](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0349-intersection-of-two-arrays) | Unique result kontrolü |
| [#49 Group Anagrams](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0049-group-anagrams) | Key oluşturma, string sıralama |
| [#560 Subarray Sum Equals K](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0560-subarray-sum-equals-k) | Prefix sum + custom hash table |
| [#3120 Count the Number of Special Characters I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3120-count-the-number-of-special-characters-i) | Lower/upper presence arrays |

Kendine sor:
- Frequency array ne zaman hash table yerine yeterli?
- Key nasıl temsil ediliyor?
- Negative key hashlenirken neye dikkat edilmeli?

## Sliding Window

İlgili klasörler:
- `../algorithms/`
- `../strings_parsing/`

| Problem | Odak |
|---|---|
| [#643 Maximum Average Subarray I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0643-maximum-average-subarray-i) | Fixed-size window |
| [#1004 Max Consecutive Ones III](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1004-max-consecutive-ones-iii) | Constraint ihlal edince left kaydırma |
| [#209 Minimum Size Subarray Sum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0209-minimum-size-subarray-sum) | Sum yeterliyken shrink etme |
| [#76 Minimum Window Substring](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0076-minimum-window-substring) | Cover then shrink modeli |
| [#239 Sliding Window Maximum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0239-sliding-window-maximum) | Monotonic deque |

Kendine sor:
- Pencere sabit mi, değişken mi?
- Window ne zaman valid veya invalid oluyor?
- Left pointer hangi koşulda ilerliyor?

## Bitwise

İlgili klasörler:
- `../bitwise/`

| Problem | Odak |
|---|---|
| [#136 Single Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0136-single-number) | XOR cancellation |
| [#268 Missing Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0268-missing-number) | XOR ile eksik sayı bulma |

Kendine sor:
- `x ^ x` neden 0 olur?
- XOR sırasının sonucu değiştirmemesi hangi avantajı sağlar?
- Bu çözümler neden ek bellek kullanmaz?

## Recursion And Trees

İlgili klasörler:
- `../data_structures/`
- `../algorithms/`

| Problem | Odak |
|---|---|
| [#104 Maximum Depth of Binary Tree](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0104-maximum-depth-of-binary-tree) | Recursive depth hesaplama |
| [#226 Invert Binary Tree](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0226-invert-binary-tree) | Recursive child swap |

Kendine sor:
- Base case nerede?
- Recursive call hangi alt probleme gidiyor?
- Return değeri parent node tarafında nasıl kullanılıyor?

## Tavsiye Edilen Çalışma Döngüsü

1. C konusunu bu repoda çalış.
2. İlgili bridge problemlerinden 2 easy, 1 medium seç.
3. Önce kendin çöz.
4. `leetcode-c-solutions` çözümüne bakıp C mekaniğini not et.
5. Kendi cümlenle şu notu yaz: "Bu problem bana C'de ne öğretti?"

---

| Geri | Ek Referans |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Hızlı Referans](../REFERENCE_INDEX.md) |
