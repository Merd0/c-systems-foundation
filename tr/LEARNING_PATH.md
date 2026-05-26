# C Systems Foundation Öğrenme Yolu

Bu dosya repo'nun ana çalışma ekranıdır. Sadece burayı açık tutarak sırayla
ilerleyebilir, her konuya tıklayarak gidebilir ve seviyeni kaybetmeden tekrar
Learning Path'e dönebilirsin.

## Nasıl Kullanılır?

1. Adımları sırayla takip et; erken atlama yapma.
2. Her adımda önce "Ders sayfası" linkine gir; geri/ileri geçişler oradadır.
3. Ders sayfasından kaynağı aç, kodu oku, çıktıyı tahmin et, sonra derle ve çalıştır.
4. Örneği bitirdikten sonra küçük bir değişiklik yapıp tekrar dene.
5. Bir konuyu bitirmiş sayılmak için "Tamam sayılır" sütunundaki kontrolü yap.

## Seviye Haritası

| Seviye | Amaç |
| --- | --- |
| 0 | Build, run, `main`, compiler ve çalışma döngüsünü oturtmak |
| 1 | Temel syntax, tipler, input/output ve operatörleri öğrenmek |
| 2 | Kontrol akışı ve döngülerle program davranışı kurmak |
| 3 | Dizi, string, fonksiyon ve header mantığını birleştirmek |
| 4 | Pointer modelini güvenli ve net şekilde anlamak |
| 5 | Struct ve union ile gerçek veri modelleri kurmak |
| 6 | Heap, ownership, `malloc/free/realloc` disiplinini oturtmak |
| 7 | C'de temel veri yapılarını elle kurmak |
| 8 | Callback, hata yönetimi, parsing ve modüler API tasarımı öğrenmek |
| 9 | Dosya, preprocessor ve bitwise gibi sistem konularını toparlamak |
| 10 | Algoritma, problem çözme ve mini projelerle bilgiyi uygulamak |
| 11 | LeetCode köprüsüyle konuları problem pratiğine bağlamak |

## Seviye 0: Build ve Çalışma Akışı

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 1 | [Ders 1: Build Guide](study/001-build-guide.md) | Repo nasıl build edilir, CI neyi kontrol eder? | `make all` ve `make test` amacını açıklayabiliyorsan |
| 2 | [Ders 2: Build Run Main Debugging](study/002-build-run-main-debugging.md) | `main`, build, run, debug döngüsü | Bir dosyanın neden çalıştırılabilir hale geldiğini anlatabiliyorsan |

## Seviye 1: Temel Sözdizimi

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 3 | [Ders 3: Variables Basics](study/003-variables-basics.md) | Değişkenler, temel tipler, formatlı çıktı | Tip seçimini ve format specifier'ı eşleştirebiliyorsan |
| 4 | [Ders 4: Printf Examples](study/004-printf-examples.md) | `printf`, hizalama, okunabilir çıktı | Kendi formatlı çıktını yazabiliyorsan |
| 5 | [Ders 5: Scanf Usage](study/005-scanf-usage.md) | Input alma ve dönüş değeri kontrolü | Hatalı input'u yakalayan küçük bir örnek yazabiliyorsan |
| 6 | [Ders 6: Arithmetic Ops](study/006-arithmetic-ops.md) | Aritmetik operatörler ve işlem sırası | Integer division etkisini açıklayabiliyorsan |
| 7 | [Ders 7: Casting Examples](study/007-casting-examples.md) | Cast, veri kaybı, dönüşüm mantığı | Ne zaman explicit cast gerektiğini biliyorsan |
| 8 | [Ders 8: Bool Const Define Sizeof](study/008-bool-const-define-sizeof.md) | `bool`, `const`, `#define`, `sizeof` | Sabit ve macro farkını açıklayabiliyorsan |
| 9 | [Ders 9: Math Library Examples](study/009-math-library-examples.md) | `math.h` ve `-lm` bağlantısı | Math fonksiyonu kullanan dosyanın neden link istediğini biliyorsan |

## Seviye 2: Kontrol Akışı ve Döngüler

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 10 | [Ders 10: If Else Examples](study/010-if-else-examples.md) | Karar verme, guard condition | Hatalı input'u önce eleyebiliyorsan |
| 11 | [Ders 11: Switch Case Examples](study/011-switch-case-examples.md) | Menü ve sabit seçenek akışı | `switch` ile küçük menü kurabiliyorsan |
| 12 | [Ders 12: For While Do Examples](study/012-for-while-do-examples.md) | `for`, `while`, `do-while` farkı | Hangi döngüyü neden seçtiğini anlatabiliyorsan |
| 13 | [Ders 13: Break Continue Rand](study/013-break-continue-rand.md) | `break`, `continue`, basit rastgelelik | Döngü kontrolünü bilinçli değiştirebiliyorsan |

## Seviye 3: Diziler, Stringler ve Fonksiyonlar

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 14 | [Ders 14: Arrays And Strings Basics](study/014-arrays-and-strings-basics.md) | Array index, char array, `'\0'` | C string'in nerede bittiğini açıklayabiliyorsan |
| 15 | [Ders 15: Multidimensional Arrays](study/015-multidimensional-arrays.md) | 2D array ve satır/sütun gezme | Matrix'i row-major gezebiliyorsan |
| 16 | [Ders 16: Functions Intro Return](study/016-functions-intro-return.md) | Fonksiyon, parametre, return | Tek işi olan küçük fonksiyon yazabiliyorsan |
| 17 | [Ders 17: Array Parameter Examples](study/017-array-parameter-examples.md) | Array parametresi ve size taşıma | Fonksiyona array ile birlikte size vermeyi unutmuyorsan |
| 18 | [Ders 18: Palindrome Solution](study/018-palindrome-solution.md) | Problem çözmede fonksiyonlara bölme | Kontrol fonksiyonunu ana akıştan ayırabiliyorsan |
| 19 | [Ders 19: Header Usage Example](study/019-header-usage-example.md) | Header, declaration, include | `.h` dosyasının rolünü anlatabiliyorsan |

## Seviye 4: Pointerlar

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 20 | [Ders 20: Pointers Overview](study/020-pointers-overview.md) | Pointer mental modeli | Adres, değer ve dereference farkını net anlatabiliyorsan |
| 21 | [Ders 21: Call By Value Reference](study/021-call-by-value-reference.md) | Value/reference davranışı | Fonksiyonun caller verisini ne zaman değiştirdiğini biliyorsan |
| 22 | [Ders 22: Null Pointer And Array](study/022-null-pointer-and-array.md) | `NULL`, array-pointer ilişkisi | `NULL` kontrolü neden gerekli anlatabiliyorsan |
| 23 | [Ders 23: Pointer Arithmetic Walkthrough](study/023-pointer-arithmetic-walkthrough.md) | Pointer arithmetic | `ptr + 1` neden byte değil eleman ilerler biliyorsan |
| 24 | [Ders 24: Const Pointer Parameters](study/024-const-pointer-parameters.md) | `const` pointer parametreleri | Fonksiyon sözleşmesini `const` ile ifade edebiliyorsan |
| 25 | [Ders 25: Dangling Pointer Warning](study/025-dangling-pointer-warning.md) | Dangling pointer riski | Yaşam süresi biten adresin neden tehlikeli olduğunu biliyorsan |

## Seviye 5: Struct ve Union

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 26 | [Ders 26: Structs Overview](study/026-structs-overview.md) | Struct kullanım alanları | Struct'ı paralel array yerine ne zaman seçeceğini biliyorsan |
| 27 | [Ders 27: Struct Intro And Array](study/027-struct-intro-and-array.md) | Struct tanımı ve struct array | Birden çok kaydı struct array ile tutabiliyorsan |
| 28 | [Ders 28: Struct Pointer Update](study/028-struct-pointer-update.md) | Struct pointer ile güncelleme | `.` ve `->` farkını doğru kullanıyorsan |
| 29 | [Ders 29: Struct Designated Initializers](study/029-struct-designated-initializers.md) | Designated initializer | Alan adıyla güvenli init yapabiliyorsan |
| 30 | [Ders 30: Struct Nested And Const](study/030-struct-nested-and-const.md) | Nested struct ve `const` kullanım | İç içe modeli okunur kurabiliyorsan |
| 31 | [Ders 31: Struct Padding Alignment](study/031-struct-padding-alignment.md) | Padding, alignment, layout | Struct boyutunun alan toplamından farklı olabileceğini biliyorsan |
| 32 | [Ders 32: Unions Overview](study/032-unions-overview.md) | Union mental modeli | Union'ın aynı belleği paylaşma mantığını açıklayabiliyorsan |
| 33 | [Ders 33: Union Size Overlay](study/033-union-size-overlay.md) | Overlay ve size davranışı | Union size'ının en büyük üyeye göre oluştuğunu biliyorsan |
| 34 | [Ders 34: Tagged Union Variant](study/034-tagged-union-variant.md) | Tagged union | Hangi union alanının aktif olduğunu tag ile izleyebiliyorsan |
| 35 | [Ders 35: Protocol Message Union](study/035-protocol-message-union.md) | Protocol/message modeli | Union'ı gerçek mesaj modeli içinde okuyabiliyorsan |

## Seviye 6: Dinamik Bellek

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 36 | [Ders 36: Memory Management Overview](study/036-memory-management-overview.md) | Heap, lifetime, ownership | Allocation sahibi kim sorusuna cevap verebiliyorsan |
| 37 | [Ders 37: Union Example](study/037-union-example.md) | Memory overlay tekrarı | Union ile bellek paylaşımını tekrar okuyabiliyorsan |
| 38 | [Ders 38: Malloc Calloc Free Examples](study/038-malloc-calloc-free-examples.md) | `malloc`, `calloc`, `free` | Her allocation için tek `free` planlıyorsan |
| 39 | [Ders 39: Realloc Growth Buffer](study/039-realloc-growth-buffer.md) | Güvenli büyüyen buffer | `realloc` sonucunu geçici pointer ile kontrol ediyorsan |
| 40 | [Ders 40: Ownership Transfer](study/040-ownership-transfer.md) | Ownership transfer | Dönen heap belleği kimin free edeceğini yazabiliyorsan |

## Seviye 7: Pratik Veri Yapıları

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 41 | [Ders 41: Data Structures Overview](study/041-data-structures-overview.md) | C'de container mantığı | Array, dynamic array ve linked list trade-off anlatabiliyorsan |
| 42 | [Ders 42: Dynamic Array](study/042-dynamic-array.md) | Vector benzeri büyüme | Capacity/size farkını biliyorsan |
| 43 | [Ders 43: Singly Linked List](study/043-singly-linked-list.md) | Singly linked list | Insert/search/delete/free akışını izleyebiliyorsan |
| 44 | [Ders 44: Doubly Linked List](study/044-doubly-linked-list.md) | Doubly linked list | `prev` ve `next` linklerini bozmadan güncelleyebiliyorsan |
| 45 | [Ders 45: Intrusive Linked List](study/045-intrusive-linked-list.md) | Intrusive list | Node bilgisinin nesne içinde yaşamasını anlayabiliyorsan |

## Seviye 8: Pratik C Interface Konuları

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 46 | [Ders 46: Function Pointers Overview](study/046-function-pointers-overview.md) | Function pointer ve callback | Fonksiyonu veri gibi geçmenin amacını biliyorsan |
| 47 | [Ders 47: Callbacks And Dispatch Table](study/047-callbacks-and-dispatch-table.md) | Dispatch table | `switch` yerine tabloyla davranış seçebiliyorsan |
| 48 | [Ders 48: Error Handling Overview](study/048-error-handling-overview.md) | C'de hata modeli | Return status + output parameter mantığını biliyorsan |
| 49 | [Ders 49: Status Code Result](study/049-status-code-result.md) | Status code pattern | Hata ve sonucu aynı anda temiz taşıyabiliyorsan |
| 50 | [Ders 50: Strings Parsing Overview](study/050-strings-parsing-overview.md) | Güvenli string parsing | `atoi` yerine neden `strtol` seçildiğini anlatabiliyorsan |
| 51 | [Ders 51: Safe Token Parsing](study/051-safe-token-parsing.md) | Token ve sayı parse etme | Hatalı token'ı sessizce kabul etmiyorsan |
| 52 | [Ders 52: Modular Design Overview](study/052-modular-design-overview.md) | Modüler C API | Header ve implementation ayrımını biliyorsan |
| 53 | [Ders 53: Opaque Handle Pattern](study/053-opaque-handle-pattern.md) | Opaque handle | Struct içini API arkasına saklayabiliyorsan |

## Seviye 9: Dosya, Preprocessor ve Bitwise

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 54 | [Ders 54: File Io Overview](study/054-file-io-overview.md) | Dosya açma, okuma, yazma | `fopen` sonucunu kontrol edip kapatmayı unutmuyorsan |
| 55 | [Ders 55: File Write Read Examples](study/055-file-write-read-examples.md) | Temel read/write | Basit dosya çıktısını tekrar okuyabiliyorsan |
| 56 | [Ders 56: Line Based Records](study/056-line-based-records.md) | Satır bazlı kayıt | `fgets` ile kayıt okuma mantığını kurabiliyorsan |
| 57 | [Ders 57: Binary Record Io](study/057-binary-record-io.md) | Binary record I/O | Binary format ile text format farkını biliyorsan |
| 58 | [Ders 58: Preprocessor Overview](study/058-preprocessor-overview.md) | Preprocessor mental modeli | Macro'nun compile öncesi çalıştığını biliyorsan |
| 59 | [Ders 59: Macro Constants And Guards](study/059-macro-constants-and-guards.md) | Macro constant ve include guard | Header guard amacını açıklayabiliyorsan |
| 60 | [Ders 60: Macro Pitfalls](study/060-macro-pitfalls.md) | Macro riskleri | Macro parametre parantezi neden önemli biliyorsan |
| 61 | [Ders 61: Conditional Compilation](study/061-conditional-compilation.md) | Conditional compilation | Build seçeneğine göre kod açıp kapatabiliyorsan |
| 62 | [Ders 62: Bitwise Overview](study/062-bitwise-overview.md) | Bitwise mental model | Flag, mask, shift kavramlarını ayırabiliyorsan |
| 63 | [Ders 63: Permission Flags](study/063-permission-flags.md) | Permission flag | Bit flag ile yetki tutabiliyorsan |
| 64 | [Ders 64: Bit Masks And Packing](study/064-bit-masks-and-packing.md) | Mask ve packing | Bir değeri bit alanına koyup çıkarabiliyorsan |
| 65 | [Ders 65: Xor Toggle Demo](study/065-xor-toggle-demo.md) | XOR toggle | XOR'un toggle/cancel davranışını biliyorsan |

## Seviye 10: Algoritmalar, Problem Çözme ve Projeler

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 66 | [Ders 66: Char Frequency](study/066-char-frequency.md) | Frequency array | Karakter sayma için küçük array kullanabiliyorsan |
| 67 | [Ders 67: Most Frequent Character](study/067-most-frequent-character.md) | Max frequency | Sayımdan sonuç seçebiliyorsan |
| 68 | [Ders 68: Search Algorithms](study/068-search-algorithms.md) | Linear/binary search | Sıralı veri için binary search seçebiliyorsan |
| 69 | [Ders 69: Sorting Algorithms](study/069-sorting-algorithms.md) | Sorting mantığı | Basit sort adımlarını izleyebiliyorsan |
| 70 | [Ders 70: Luhn Validator](study/070-luhn-validator.md) | Gerçek algoritma uygulaması | Kural setini kod akışına çevirebiliyorsan |
| 71 | [Ders 71: Problem Solving](study/071-problem-solving.md) | Küçük senaryo problemleri | En az iki örneği değiştirip çalıştırdıysan |
| 72 | [Ders 72: Library Management Cli](study/072-library-management-cli.md) | Tek dosya CLI proje | Menü, struct array ve input akışını okuyabiliyorsan |
| 73 | [Ders 73: Library Management File Persist](study/073-library-management-file-persist.md) | Dosya kalıcılığı olan proje | Verinin program kapanınca nasıl saklandığını biliyorsan |
| 74 | [Ders 74: Library Management Modular](study/074-library-management-modular.md) | Modüler proje düzeni | `include/`, `src/`, `tests/` ayrımını anlayabiliyorsan |

## Seviye 11: LeetCode ile Pekiştirme

| Adım | Ders sayfası | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 75 | [Ders 75: Leetcode Bridge](study/075-leetcode-bridge.md) | C konularını LeetCode pratiğine bağlamak | Her ana konu için seçilmiş sorulardan tekrar planı çıkarabiliyorsan |

## Bitirme Rutini

Her seviyenin sonunda şunları yap:

1. O seviyeden 1 örneği sıfırdan tekrar yaz.
2. 1 örneği bilinçli boz ve hatayı düzelt.
3. Not olarak şunu yaz: "Bu seviye bana C'de hangi gerçek problemi çözdürüyor?"
4. Sonra sıradaki seviyeye geç.

## Hızlı Gezinti

| Git | Link |
| --- | --- |
| Repo ana sayfası | [`../README.md`](../README.md) |
| Türkçe hızlı referans | [`REFERENCE_INDEX.md`](REFERENCE_INDEX.md) |
| LeetCode köprüsü | [`notes/leetcode_bridge.md`](notes/leetcode_bridge.md) |
