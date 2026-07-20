# C Systems Foundation Öğrenme Yolu

Bu dosya repo'nun ana çalışma ekranıdır. Sadece burayı açık tutarak sırayla
ilerleyebilir, her konuya tıklayarak gidebilir ve seviyeni kaybetmeden tekrar
Learning Path'e dönebilirsin.

## Nasıl Kullanılır?

1. Adımları sırayla takip et; erken atlama yapma.
2. Her adımdaki konu notunu veya çalışan kaynak kodu doğrudan aç.
3. Kodu oku, çıktısını ya da davranışını tahmin et, sonra derle ve çalıştır.
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

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 1 | [Ders 1: Build Guide](../docs/build-guide.md) | Repo nasıl build edilir, CI neyi kontrol eder? | `make all` ve `make test` amacını açıklayabiliyorsan |
| 2 | [Ders 2: Build Run Main Debugging](notes/build_run_main_debugging.md) | `main`, build, run, debug döngüsü | Bir dosyanın neden çalıştırılabilir hale geldiğini anlatabiliyorsan |

## Seviye 1: Temel Sözdizimi

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 3 | [Ders 3: Variables Basics](fundamentals/variables_basics.c) | Değişkenler, temel tipler, formatlı çıktı | Tip seçimini ve format specifier'ı eşleştirebiliyorsan |
| 4 | [Ders 4: Printf Examples](input_output/printf_examples.c) | `printf`, hizalama, okunabilir çıktı | Kendi formatlı çıktını yazabiliyorsan |
| 5 | [Ders 5: Scanf Usage](input_output/scanf_usage.c) | Input alma ve dönüş değeri kontrolü | Hatalı input'u yakalayan küçük bir örnek yazabiliyorsan |
| 6 | [Ders 6: Arithmetic Ops](operators/arithmetic_ops.c) | Aritmetik operatörler ve işlem sırası | Integer division etkisini açıklayabiliyorsan |
| 7 | [Ders 7: Casting Examples](operators/casting_examples.c) | Cast, veri kaybı, dönüşüm mantığı | Ne zaman explicit cast gerektiğini biliyorsan |
| 8 | [Ders 8: Bool Const Define Sizeof](operators/bool_const_define_sizeof.c) | `bool`, `const`, `#define`, `sizeof` | Sabit ve macro farkını açıklayabiliyorsan |
| 9 | [Ders 9: Math Library Examples](operators/math_library_examples.c) | `math.h` ve `-lm` bağlantısı | Math fonksiyonu kullanan dosyanın neden link istediğini biliyorsan |

## Seviye 2: Kontrol Akışı ve Döngüler

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 10 | [Ders 10: If Else Examples](control_flow/if_else_examples.c) | Karar verme, guard condition | Hatalı input'u önce eleyebiliyorsan |
| 11 | [Ders 11: Switch Case Examples](control_flow/switch_case_examples.c) | Menü ve sabit seçenek akışı | `switch` ile küçük menü kurabiliyorsan |
| 12 | [Ders 12: For While Do Examples](loops/for_while_do_examples.c) | `for`, `while`, `do-while` farkı | Hangi döngüyü neden seçtiğini anlatabiliyorsan |
| 13 | [Ders 13: Break Continue Rand](loops/break_continue_rand.c) | `break`, `continue`, basit rastgelelik | Döngü kontrolünü bilinçli değiştirebiliyorsan |

## Seviye 3: Diziler, Stringler ve Fonksiyonlar

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 14 | [Ders 14: Arrays And Strings Basics](arrays/arrays_and_strings_basics.c) | Array index, char array, `'\0'` | C string'in nerede bittiğini açıklayabiliyorsan |
| 15 | [Ders 15: Multidimensional Arrays](arrays/multidimensional_arrays.c) | 2D array ve satır/sütun gezme | Matrix'i row-major gezebiliyorsan |
| 16 | [Ders 16: Functions Intro Return](functions/functions_intro_return.c) | Fonksiyon, parametre, return | Tek işi olan küçük fonksiyon yazabiliyorsan |
| 17 | [Ders 17: Array Parameter Examples](functions/array_parameter_examples.c) | Array parametresi ve size taşıma | Fonksiyona array ile birlikte size vermeyi unutmuyorsan |
| 18 | [Ders 18: Palindrome Solution](functions/palindrome_solution.c) | Problem çözmede fonksiyonlara bölme | Kontrol fonksiyonunu ana akıştan ayırabiliyorsan |
| 19 | [Ders 19: Header Usage Example](headers/header_usage_example.c) | Header, declaration, include | `.h` dosyasının rolünü anlatabiliyorsan |

## Seviye 4: Pointerlar

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 20 | [Ders 20: Pointers Overview](pointers/README.md) | Pointer mental modeli | Adres, değer ve dereference farkını net anlatabiliyorsan |
| 21 | [Ders 21: Call By Value Reference](pointers/call_by_value_reference.c) | Value/reference davranışı | Fonksiyonun caller verisini ne zaman değiştirdiğini biliyorsan |
| 22 | [Ders 22: Null Pointer And Array](pointers/null_pointer_and_array.c) | `NULL`, array-pointer ilişkisi | `NULL` kontrolü neden gerekli anlatabiliyorsan |
| 23 | [Ders 23: Pointer Arithmetic Walkthrough](pointers/pointer_arithmetic_walkthrough.c) | Pointer arithmetic | `ptr + 1` neden byte değil eleman ilerler biliyorsan |
| 24 | [Ders 24: Const Pointer Parameters](pointers/const_pointer_parameters.c) | `const` pointer parametreleri | Fonksiyon sözleşmesini `const` ile ifade edebiliyorsan |
| 25 | [Ders 25: Dangling Pointer Warning](pointers/dangling_pointer_warning.c) | Dangling pointer riski | Yaşam süresi biten adresin neden tehlikeli olduğunu biliyorsan |

## Seviye 5: Struct ve Union

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 26 | [Ders 26: Structs Overview](structs/README.md) | Struct kullanım alanları | Struct'ı paralel array yerine ne zaman seçeceğini biliyorsan |
| 27 | [Ders 27: Struct Intro And Array](structs/struct_intro_and_array.c) | Struct tanımı ve struct array | Birden çok kaydı struct array ile tutabiliyorsan |
| 28 | [Ders 28: Struct Pointer Update](structs/struct_pointer_update.c) | Struct pointer ile güncelleme | `.` ve `->` farkını doğru kullanıyorsan |
| 29 | [Ders 29: Struct Designated Initializers](structs/struct_designated_initializers.c) | Designated initializer | Alan adıyla güvenli init yapabiliyorsan |
| 30 | [Ders 30: Struct Nested And Const](structs/struct_nested_and_const.c) | Nested struct ve `const` kullanım | İç içe modeli okunur kurabiliyorsan |
| 31 | [Ders 31: Struct Padding Alignment](structs/struct_padding_alignment.c) | Padding, alignment, layout | Struct boyutunun alan toplamından farklı olabileceğini biliyorsan |
| 32 | [Ders 32: Unions Overview](unions/README.md) | Union mental modeli | Union'ın aynı belleği paylaşma mantığını açıklayabiliyorsan |
| 33 | [Ders 33: Union Size Overlay](unions/union_size_overlay.c) | Overlay ve size davranışı | Union size'ının en büyük üyeye göre oluştuğunu biliyorsan |
| 34 | [Ders 34: Tagged Union Variant](unions/tagged_union_variant.c) | Tagged union | Hangi union alanının aktif olduğunu tag ile izleyebiliyorsan |
| 35 | [Ders 35: Protocol Message Union](unions/protocol_message_union.c) | Protocol/message modeli | Union'ı gerçek mesaj modeli içinde okuyabiliyorsan |

## Seviye 6: Dinamik Bellek

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 36 | [Ders 36: Memory Management Overview](memory_management/README.md) | Heap, lifetime, ownership | Allocation sahibi kim sorusuna cevap verebiliyorsan |
| 37 | [Ders 37: Union Example](memory_management/union_example.c) | Memory overlay tekrarı | Union ile bellek paylaşımını tekrar okuyabiliyorsan |
| 38 | [Ders 38: Malloc Calloc Free Examples](memory_management/malloc_calloc_free_examples.c) | `malloc`, `calloc`, `free` | Her allocation için tek `free` planlıyorsan |
| 39 | [Ders 39: Realloc Growth Buffer](memory_management/realloc_growth_buffer.c) | Güvenli büyüyen buffer | `realloc` sonucunu geçici pointer ile kontrol ediyorsan |
| 40 | [Ders 40: Ownership Transfer](memory_management/ownership_transfer.c) | Ownership transfer | Dönen heap belleği kimin free edeceğini yazabiliyorsan |

## Seviye 7: Pratik Veri Yapıları

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 41 | [Ders 41: Data Structures Overview](data_structures/README.md) | C'de container mantığı | Array, dynamic array ve linked list trade-off anlatabiliyorsan |
| 42 | [Ders 42: Dynamic Array](data_structures/dynamic_array.c) | Vector benzeri büyüme | Capacity/size farkını biliyorsan |
| 43 | [Ders 43: Singly Linked List](data_structures/singly_linked_list.c) | Singly linked list | Insert/search/delete/free akışını izleyebiliyorsan |
| 44 | [Ders 44: Doubly Linked List](data_structures/doubly_linked_list.c) | Doubly linked list | `prev` ve `next` linklerini bozmadan güncelleyebiliyorsan |
| 45 | [Ders 45: Intrusive Linked List](data_structures/intrusive_linked_list.c) | Intrusive list | Node bilgisinin nesne içinde yaşamasını anlayabiliyorsan |

## Seviye 8: Pratik C Interface Konuları

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 46 | [Ders 46: Function Pointers Overview](function_pointers/README.md) | Function pointer ve callback | Fonksiyonu veri gibi geçmenin amacını biliyorsan |
| 47 | [Ders 47: Callbacks And Dispatch Table](function_pointers/callbacks_and_dispatch_table.c) | Dispatch table | `switch` yerine tabloyla davranış seçebiliyorsan |
| 48 | [Ders 48: Error Handling Overview](error_handling/README.md) | C'de hata modeli | Return status + output parameter mantığını biliyorsan |
| 49 | [Ders 49: Status Code Result](error_handling/status_code_result.c) | Status code pattern | Hata ve sonucu aynı anda temiz taşıyabiliyorsan |
| 50 | [Ders 50: Strings Parsing Overview](strings_parsing/README.md) | Güvenli string parsing | `atoi` yerine neden `strtol` seçildiğini anlatabiliyorsan |
| 51 | [Ders 51: Safe Token Parsing](strings_parsing/safe_token_parsing.c) | Token ve sayı parse etme | Hatalı token'ı sessizce kabul etmiyorsan |
| 52 | [Ders 52: Modular Design Overview](modular_design/README.md) | Modüler C API | Header ve implementation ayrımını biliyorsan |
| 53 | [Ders 53: Opaque Handle Pattern](modular_design/opaque_handle_pattern.c) | Opaque handle | Struct içini API arkasına saklayabiliyorsan |

## Seviye 9: Dosya, Preprocessor ve Bitwise

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 54 | [Ders 54: File Io Overview](file_io/README.md) | Dosya açma, okuma, yazma | `fopen` sonucunu kontrol edip kapatmayı unutmuyorsan |
| 55 | [Ders 55: File Write Read Examples](file_io/file_write_read_examples.c) | Temel read/write | Basit dosya çıktısını tekrar okuyabiliyorsan |
| 56 | [Ders 56: Line Based Records](file_io/line_based_records.c) | Satır bazlı kayıt | `fgets` ile kayıt okuma mantığını kurabiliyorsan |
| 57 | [Ders 57: Binary Record Io](file_io/binary_record_io.c) | Binary record I/O | Binary format ile text format farkını biliyorsan |
| 58 | [Ders 58: Preprocessor Overview](preprocessor/README.md) | Preprocessor mental modeli | Macro'nun compile öncesi çalıştığını biliyorsan |
| 59 | [Ders 59: Macro Constants And Guards](preprocessor/macro_constants_and_guards.c) | Macro constant ve include guard | Header guard amacını açıklayabiliyorsan |
| 60 | [Ders 60: Macro Pitfalls](preprocessor/macro_pitfalls.c) | Macro riskleri | Macro parametre parantezi neden önemli biliyorsan |
| 61 | [Ders 61: Conditional Compilation](preprocessor/conditional_compilation.c) | Conditional compilation | Build seçeneğine göre kod açıp kapatabiliyorsan |
| 62 | [Ders 62: Bitwise Overview](bitwise/README.md) | Bitwise mental model | Flag, mask, shift kavramlarını ayırabiliyorsan |
| 63 | [Ders 63: Permission Flags](bitwise/permission_flags.c) | Permission flag | Bit flag ile yetki tutabiliyorsan |
| 64 | [Ders 64: Bit Masks And Packing](bitwise/bit_masks_and_packing.c) | Mask ve packing | Bir değeri bit alanına koyup çıkarabiliyorsan |
| 65 | [Ders 65: Xor Toggle Demo](bitwise/xor_toggle_demo.c) | XOR toggle | XOR'un toggle/cancel davranışını biliyorsan |

## Seviye 10: Algoritmalar, Problem Çözme ve Projeler

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 66 | [Ders 66: Char Frequency](algorithms/char_frequency.c) | Frequency array | Karakter sayma için küçük array kullanabiliyorsan |
| 67 | [Ders 67: Most Frequent Character](algorithms/most_frequent_character.c) | Max frequency | Sayımdan sonuç seçebiliyorsan |
| 68 | [Ders 68: Search Algorithms](algorithms/search_algorithms.c) | Linear/binary search | Sıralı veri için binary search seçebiliyorsan |
| 69 | [Ders 69: Sorting Algorithms](algorithms/sorting_algorithms.c) | Sorting mantığı | Basit sort adımlarını izleyebiliyorsan |
| 70 | [Ders 70: Luhn Validator](algorithms/luhn_validator.c) | Gerçek algoritma uygulaması | Kural setini kod akışına çevirebiliyorsan |
| 71 | [Ders 71: Problem Solving](problem_solving/README.md) | Küçük senaryo problemleri | En az iki örneği değiştirip çalıştırdıysan |
| 72 | [Ders 72: Library Management Cli](projects/library_management_cli.c) | Tek dosya CLI proje | Menü, struct array ve input akışını okuyabiliyorsan |
| 73 | [Ders 73: Library Management File Persist](projects/library_management_file_persist.c) | Dosya kalıcılığı olan proje | Verinin program kapanınca nasıl saklandığını biliyorsan |
| 74 | [Ders 74: Library Management Modular](projects/library_management_modular/README.md) | Modüler proje düzeni | `include/`, `src/`, `tests/` ayrımını anlayabiliyorsan |

## Seviye 11: LeetCode ile Pekiştirme

| Adım | Ders kaynağı | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 75 | [Ders 75: Leetcode Bridge](notes/leetcode_bridge.md) | C konularını LeetCode pratiğine bağlamak | Her ana konu için seçilmiş sorulardan tekrar planı çıkarabiliyorsan |

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
