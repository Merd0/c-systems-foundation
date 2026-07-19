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
| [#3300 Minimum Element After Replacement With Digit Sum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3300-minimum-element-after-replacement-with-digit-sum) | Array scan, digit sum simulation |
| [#961 N-Repeated Element in Size 2N Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0961-n-repeated-element-in-size-2n-array) | Frequency array, ilk tekrar eden değeri yakalama |
| [#1266 Minimum Time Visiting All Points](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1266-minimum-time-visiting-all-points) | Koordinat tarama, Chebyshev distance |
| [#1984 Minimum Difference Between Highest and Lowest of K Scores](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1984-minimum-difference-between-highest-and-lowest-of-k-scores) | Sort sonrası `k` boyutlu pencere tarama |
| [#3507 Minimum Pair Removal to Sort Array I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3507-minimum-pair-removal-to-sort-array-i) | In-place simulation, bitişik çift merge |
| [#2126 Destroying Asteroids](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2126-destroying-asteroids) | Sort sonrası greedy kütle büyütme |
| [#2144 Minimum Cost of Buying Candies With Discount](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2144-minimum-cost-of-buying-candies-with-discount) | Descending sort, uclu grupta greedy discount |
| [#3633 Earliest Finish Time for Land and Water Rides I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3633-earliest-finish-time-for-land-and-water-rides-i) | Pair enumeration ve iki sirayi da deneme |
| [#3635 Earliest Finish Time for Land and Water Rides II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3635-earliest-finish-time-for-land-and-water-rides-ii) | En erken ilk ride bitisini hesaplayip ikinci kategoriyi tarama |
| [#189 Rotate Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0189-rotate-array) | Uc reverse ile in-place array rotation |
| [#3751 Total Waviness of Numbers in Range I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3751-total-waviness-of-numbers-in-range-i) | Kucuk constraint'te enumeration ve digit scan |
| [#2574 Left and Right Sum Differences](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2574-left-and-right-sum-differences) | Total sum ve ilerleyen left accumulator |
| [#1732 Find the Highest Altitude](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1732-find-the-highest-altitude) | Running prefix altitude ve maksimum takip etme |
| [#1464 Maximum Product of Two Elements in an Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1464-maximum-product-of-two-elements-in-an-array) | Tek geciste en buyuk iki degeri takip etme |
| [#1346 Check If N and Its Double Exist](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1346-check-if-n-and-its-double-exist) | Farkli indexlerle pair scan ve iki kat iliskisi |
| [#941 Valid Mountain Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0941-valid-mountain-array) | State tutmadan climb/peak/descend array dogrulama |
| [#2161 Partition Array According to Given Pivot](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2161-partition-array-according-to-given-pivot) | Yeni array'e stable three-way partition |
| [#3689 Maximum Total Subarray Value I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3689-maximum-total-subarray-value-i) | Global min/max taramasi ve tekrarli optimal secim |
| [#1827 Minimum Operations to Make the Array Increasing](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1827-minimum-operations-to-make-the-array-increasing) | Onceki elemana gore greedy in-place update |
| [#3737 Count Subarrays With Majority Element I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3737-count-subarrays-with-majority-element-i) | Nested subarray enumeration ve majority kosulu |
| [#238 Product of Array Except Self](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0238-product-of-array-except-self) | Bolmesiz prefix ve suffix accumulator kullanimi |
| [#75 Sort Colors](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0075-sort-colors) | Counting write-back ve in-place three-way partition |
| [#1979 Find Greatest Common Divisor of Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1979-find-greatest-common-divisor-of-array) | Guvenli min/max baslatma ve geriye dogru ortak bolen arama |
| [#80 Remove Duplicates from Sorted Array II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0080-remove-duplicates-from-sorted-array-ii) | Sorted array kosuluyla in-place write index kullanimi |
| [#287 Find the Duplicate Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0287-find-the-duplicate-number) | Once frequency table, sonra array'i linked list gibi dusunerek cycle tespiti |
| [#152 Maximum Product Subarray](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0152-maximum-product-subarray) | Negatif carpimlar rol degistirdigi icin max/min running state tasima |
| [#134 Gas Station](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0134-gas-station) | Kaynak dengesi takip etme ve state gecersiz olunca greedy restart |
| [#55 Jump Game](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0055-jump-game) | Farthest reachable index ile greedy ilerleme |
| [#621 Task Scheduler](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0621-task-scheduler) | Frequency table ve CPU cooldown skeleton hesabi |
| [#1679 Max Number of K-Sum Pairs](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1679-max-number-of-k-sum-pairs) | Pair enumeration TLE sinyali, sonra sorted two-pointer eslestirme |
| [#2529 Maximum Count of Positive Integer and Negative Integer](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2529-maximum-count-of-positive-integer-and-negative-integer) | Sirali signed degerler, zero orta boundary degeri |
| [#2073 Time Needed to Buy Tickets](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2073-time-needed-to-buy-tickets) | Circular array index ile queue benzeri tick simulasyonu |
| [#495 Teemo Attacking](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0495-teemo-attacking) | Event window ve cakisma suresi hesabi |
| [#1041 Robot Bounded In Circle](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1041-robot-bounded-in-circle) | Komut stream'i icin direction state table |
| [#874 Walking Robot Simulation](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0874-walking-robot-simulation) | Robot hareket state'i ve encoded obstacle lookup |
| [#657 Robot Return to Origin](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0657-robot-return-to-origin) | Hareket komutlarindan basit x/y displacement state |
| [#1343 Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1343-number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold) | Fixed-size moving average ve threshold detection |

Kendine sor:
- Dizi boyutu fonksiyona nasıl taşınıyor?
- Hangi çözüm input array'i değiştiriyor?
- In-place çözüm ile yeni array döndüren çözüm arasındaki fark ne?
- İç içe sayı/rakam döngüsünde asıl maliyet nereden geliyor?
- Constraint küçükse direct simulation ne zaman yeterli olur?

## Matrix And 2D Arrays

İlgili klasörler:
- `../arrays/`
- `../memory_management/`

| Problem | Odak |
|---|---|
| [#54 Spiral Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0054-spiral-matrix) | Dort boundary ile matrix traversal |
| [#59 Spiral Matrix II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0059-spiral-matrix-ii) | 2D result allocate edip doldurma |
| [#73 Set Matrix Zeroes](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0073-set-matrix-zeroes) | Row ve column marker array kullanimi |
| [#48 Rotate Image](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0048-rotate-image) | In-place transpose ve row reverse |
| [#289 Game of Life](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0289-game-of-life) | Matrix icinde temporary state encode etme |
| [#832 Flipping an Image](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0832-flipping-an-image) | Binary row'u tek geciste reverse ve invert etme |
| [#1582 Special Positions in a Binary Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1582-special-positions-in-a-binary-matrix) | Aday hucre icin row ve column 1 sayma |
| [#1572 Matrix Diagonal Sum](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1572-matrix-diagonal-sum) | Direkt diagonal index formulleri |
| [#74 Search a 2D Matrix](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0074-search-a-2d-matrix) | 1D index'i row/col hesabina cevirerek binary search |
| [#56 Merge Intervals](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0056-merge-intervals) | Interval sort ve malloc edilen 2 kolonlu result satirlari |

Kendine sor:
- Matrix yeni allocation olarak mi donuyor yoksa in-place mi degisiyor?
- Satir ve sutun boundary'lerini hangi degiskenler temsil ediyor?
- Bir hucrenin hem eski hem yeni state'i ne zaman korunmali?

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
| [#443 String Compression](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0443-string-compression) | In-place read/write buffer compression |
| [#1662 Check If Two String Arrays are Equivalent](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1662-check-if-two-string-arrays-are-equivalent) | Parcalanmis stringleri allocation yapmadan karakter stream'i gibi karsilastirma |
| [#1773 Count Items Matching a Rule](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1773-count-items-matching-a-rule) | `char***` item tablosu, rule-to-column mapping, `strcmp` |
| [#1784 Check if Binary String Has at Most One Segment of Ones](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1784-check-if-binary-string-has-at-most-one-segment-of-ones) | Binary string uzerinde tek flag'li state machine |
| [#1758 Minimum Changes To Make Alternating Binary String](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1758-minimum-changes-to-make-alternating-binary-string) | Beklenen binary patternlerle karsilastirma |
| [#1209 Remove All Adjacent Duplicates in String II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1209-remove-all-adjacent-duplicates-in-string-ii) | In-place stack, write pointer ve run-length metadata |

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
| [#287 Find the Duplicate Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0287-find-the-duplicate-number) | Floyd slow/fast pointer fikrini array indexleri uzerinde kullanma |
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
| [#622 Design Circular Queue](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0622-design-circular-queue) | Struct'un own ettigi circular buffer |
| [#641 Design Circular Deque](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0641-design-circular-deque) | Modulo ile front/rear state yonetimi |
| [#705 Design HashSet](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0705-design-hashset) | Direct-address presence table |
| [#706 Design HashMap](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0706-design-hashmap) | Value ve existence array'lerini ayri tutma |
| [#707 Design Linked List](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0707-design-linked-list) | Dummy-head linked-list API |
| [#1603 Design Parking System](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1603-design-parking-system) | Struct icinde capacity ve state yonetimi |
| [#933 Number of Recent Calls](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0933-number-of-recent-calls) | Artan timestamp'ler uzerinde queue window |
| [#303 Range Sum Query - Immutable](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0303-range-sum-query-immutable) | Struct'un own ettigi prefix buffer ve cleanup |
| [#1352 Product of the Last K Numbers](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1352-product-of-the-last-k-numbers) | Struct icinde prefix product state; brute force query dongusu ile O(1) stateful query farki |
| [#1472 Design Browser History](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1472-design-browser-history) | Struct'un own ettigi history array, current index ve forward history temizleme |
| [#900 RLE Iterator](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0900-rle-iterator) | Current run index ile stateful compressed-stream tuketimi |
| [#1656 Design an Ordered Stream](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1656-design-an-ordered-stream) | Next-expected-id state ile sirasi karisik stream buffering |
| [#901 Online Stock Span](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0901-online-stock-span) | Price/span bloklariyla monotonic stack state |
| [#946 Validate Stack Sequences](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0946-validate-stack-sequences) | Sabit push sirasini simule edip beklenen pop olaylarini stack state uzerinden tuketme |
| [#1381 Design a Stack With Increment Operation](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1381-design-a-stack-with-increment-operation) | Struct'un own ettigi stack array, top index, capacity kontrolu ve alttaki k elemani guncelleme |
| [#735 Asteroid Collision](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0735-asteroid-collision) | Return array'i stack gibi kullanarak state simulation yapma |
| [#649 Dota2 Senate](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0649-dota2-senate) | Iki index queue ile cyclic turn scheduling |
| [#503 Next Greater Element II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0503-next-greater-element-ii) | Circular array/ring-buffer taramasinda monotonic stack |

Kendine sor:
- Struct hangi state'i saklıyor?
- Fonksiyonlar struct'ı value ile mi pointer ile mi alıyor?
- Listede node silerken hangi linkler değişiyor?
- Custom `Free` fonksiyonu hangi heap buffer'lari temizlemeli?
- Circular buffer'da `size` alani neden dusunmeyi kolaylastirir?
- Direct-address table neden ayri bir existence marker ister?

## Search And Binary Search

İlgili klasörler:
- `../algorithms/search_algorithms.c`

| Problem | Odak |
|---|---|
| [#704 Binary Search](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0704-binary-search) | Klasik binary search |
| [#34 Find First and Last Position](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0034-find-first-and-last-position-of-element-in-sorted-array) | Boundary search |
| [#33 Search in Rotated Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0033-search-in-rotated-sorted-array) | Sıralı yarıyı tespit etme |
| [#153 Find Minimum in Rotated Sorted Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0153-find-minimum-in-rotated-sorted-array) | `left < right` binary search modeli |
| [#2300 Successful Pairs of Spells and Potions](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2300-successful-pairs-of-spells-and-potions) | Bir kere sort edip her threshold icin lower-bound binary search |
| [#1011 Capacity To Ship Packages Within D Days](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1011-capacity-to-ship-packages-within-d-days) | Answer uzerinde binary search ve sirayi koruyan feasibility check |
| [#2529 Maximum Count of Positive Integer and Negative Integer](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2529-maximum-count-of-positive-integer-and-negative-integer) | Ilk `>= 0` ve ilk `> 0` boundary'lerini bulma |

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
| [#1512 Number of Good Pairs](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1512-number-of-good-pairs) | Equal-value pair sayma, frequency optimizasyon yolu |
| [#49 Group Anagrams](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0049-group-anagrams) | Key oluşturma, string sıralama |
| [#560 Subarray Sum Equals K](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0560-subarray-sum-equals-k) | Prefix sum + custom hash table |
| [#1207 Unique Number of Occurrences](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1207-unique-number-of-occurrences) | Negative value offset ile fixed frequency array, sonra duplicate count kontrolu |
| [#1748 Sum of Unique Elements](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1748-sum-of-unique-elements) | Kucuk fixed frequency table ve count-one degerler |
| [#287 Find the Duplicate Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0287-find-the-duplicate-number) | Frequency array cozumu ve O(1) bellek alternatifi |
| [#3120 Count the Number of Special Characters I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3120-count-the-number-of-special-characters-i) | Lower/upper presence arrays |
| [#3121 Count the Number of Special Characters II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3121-count-the-number-of-special-characters-ii) | Lower/upper sirasi ve index kontrolu |

Kendine sor:
- Frequency array ne zaman hash table yerine yeterli?
- Key nasıl temsil ediliyor?
- Negative key hashlenirken neye dikkat edilmeli?

## Trie Ve Suffix Matching

İlgili klasörler:
- `../data_structures/`
- `../strings_parsing/`
- `../algorithms/`

| Problem | Odak |
|---|---|
| [#3093 Longest Common Suffix Queries](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3093-longest-common-suffix-queries) | Reversed trie, node içinde en iyi index tutma |

Kendine sor:
- Suffix problemi neden string'i sondan okuyunca prefix problemine dönüşüyor?
- `child[26]` array'i hangi durumda hash table yerine yeterli olur?
- Her node'da `bestIndex` tutmak query sırasında tekrar aramayı nasıl engeller?

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
| [#1456 Maximum Number of Vowels in a Substring of Given Length](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1456-maximum-number-of-vowels-in-a-substring-of-given-length) | Sabit pencere, giren ve cikan karakter sayimi |
| [#1658 Minimum Operations to Reduce X to Zero](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1658-minimum-operations-to-reduce-x-to-zero) | Edge removal fikrini en uzun valid orta window'a cevirme |

Kendine sor:
- Pencere sabit mi, değişken mi?
- Window ne zaman valid veya invalid oluyor?
- Left pointer hangi koşulda ilerliyor?

## Bitwise

İlgili klasörler:
- `../bitwise/`

| Problem | Odak |
|---|---|
| [#191 Number of 1 Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0191-number-of-1-bits) | Set bit sayma |
| [#231 Power of Two](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0231-power-of-two) | Tek set bit kontrolü |
| [#461 Hamming Distance](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0461-hamming-distance) | XOR ile farklı bitleri bulma |
| [#476 Number Complement](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0476-number-complement) | Mask üretip bit flip yapma |
| [#1009 Complement of Base 10 Integer](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1009-complement-of-base-10-integer) | Kullanilan bitler icin maske uretip sadece aktif bitleri XOR ile flip etme |
| [#190 Reverse Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0190-reverse-bits) | 32-bit shift ve bit sırası |
| [#405 Convert a Number to Hexadecimal](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0405-convert-a-number-to-hexadecimal) | 4-bit nibble ve hex gösterim |
| [#3314 Construct the Minimum Bitwise Array I](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/3314-construct-the-minimum-bitwise-array-i) | `x | (x + 1)` bit pattern'ini test etme |
| [#338 Counting Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0338-counting-bits) | Tekrarli set-bit sayma |
| [#342 Power of Four](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0342-power-of-four) | Base-4 bolunebilirlik kontrolu |
| [#389 Find the Difference](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0389-find-the-difference) | Karakterlerde XOR cancellation |
| [#868 Binary Gap](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0868-binary-gap) | Shift ederken bit pozisyonu takip etme |
| [#693 Binary Number with Alternating Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0693-binary-number-with-alternating-bits) | Komsu bitleri karsilastirma |
| [#1342 Number of Steps to Reduce a Number to Zero](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1342-number-of-steps-to-reduce-a-number-to-zero) | Even/odd reduction dongusu |
| [#2220 Minimum Bit Flips to Convert Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2220-minimum-bit-flips-to-convert-number) | XOR fark maskesi, set bit sayma |
| [#2595 Number of Even and Odd Bits](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2595-number-of-even-and-odd-bits) | Bit pozisyon parity'sine gore set bit sayma |
| [#371 Sum of Two Integers](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0371-sum-of-two-integers) | XOR toplam ve sola kaymis carry |
| [#201 Bitwise AND of Numbers Range](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0201-bitwise-and-of-numbers-range) | Aralikta ortak binary prefix |
| [#137 Single Number II](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0137-single-number-ii) | Sorting fallback, bit-count alternatifi |
| [#260 Single Number III](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0260-single-number-iii) | Sorting fallback, XOR partition alternatifi |
| [#1318 Minimum Flips to Make a OR b Equal to c](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1318-minimum-flips-to-make-a-or-b-equal-to-c) | Bit bit OR condition kontrolu |
| [#1310 XOR Queries of a Subarray](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1310-xor-queries-of-a-subarray) | Prefix XOR ve aralikta cancellation |
| [#1486 XOR Operation in an Array](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1486-xor-operation-in-an-array) | Sayisal sequence uretip XOR accumulator kullanma |
| [#1371 Find the Longest Substring Containing Vowels in Even Counts](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1371-find-the-longest-substring-containing-vowels-in-even-counts) | Prefix parity mask, her state'in ilk indexini saklama |
| [#2433 Find The Original Array of Prefix Xor](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2433-find-the-original-array-of-prefix-xor) | Komsu prefix XOR state'lerinden orijinal degerleri geri kurma |
| [#1829 Maximum XOR for Each Query](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1829-maximum-xor-for-each-query) | All-ones bit mask ve XOR cancellation ile sondan silme |
| [#1461 Check If a String Contains All Binary Codes of Size K](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/1461-check-if-a-string-contains-all-binary-codes-of-size-k) | Rolling k-bit shift-register window ve seen-pattern tablosu |
| [#2997 Minimum Number of Operations to Make Array XOR Equal to K](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/2997-minimum-number-of-operations-to-make-array-xor-equal-to-k) | Final XOR fark maskesi, set bit sayma ve en sagdaki set bit'i temizleme numarasi |
| [#318 Maximum Product of Word Lengths](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0318-maximum-product-of-word-lengths) | Kelimeler icin 26-bit mask |
| [#136 Single Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0136-single-number) | XOR cancellation |
| [#268 Missing Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0268-missing-number) | XOR ile eksik sayı bulma |

Kendine sor:
- `x ^ x` neden 0 olur?
- XOR sırasının sonucu değiştirmemesi hangi avantajı sağlar?
- Bu çözümler neden ek bellek kullanmaz?
- `n & (n - 1)` neden en sağdaki set bit'i temizler?
- Hex gösterimde neden her karakter 4 biti temsil eder?

## Integer Parsing And Byte-Level Work

İlgili klasörler:
- `../strings_parsing/`
- `../bitwise/`
- `../operators/`

| Problem | Odak |
|---|---|
| [#67 Add Binary](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0067-add-binary) | Binary string toplama, carry taşıma |
| [#7 Reverse Integer](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0007-reverse-integer) | Çarpma öncesi 32-bit overflow kontrolü |
| [#8 String to Integer (atoi)](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0008-string-to-integer-atoi) | Parser aşamaları, sign kontrolü, integer clamp |
| [#393 UTF-8 Validation](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0393-utf-8-validation) | Byte prefix kontrolü ve continuation byte mantığı |
| [#717 1-bit and 2-bit Characters](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0717-1-bit-and-2-bit-characters) | Degisken uzunluklu bit-stream parse etme |
| [#165 Compare Version Numbers](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0165-compare-version-numbers) | Dotted integer revision parse etme, substring allocate etmeden |
| [#468 Validate IP Address](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0468-validate-ip-address) | IPv4 ve IPv6 parser kurallari |
| [#43 Multiply Strings](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0043-multiply-strings) | Elle digit buffer multiplication |
| [#65 Valid Number](https://github.com/Merd0/leetcode-c-solutions/tree/main/problems/0065-valid-number) | Numeric parser state flag'leri |

Kendine sor:
- Parser hangi state'i hatırlamak zorunda?
- Hangi işlem final assignment'tan önce overflow üretebilir?
- Birkaç high bit, byte sequence'in şeklini nasıl anlatır?

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
