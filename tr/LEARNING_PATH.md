# C Systems Foundation Öğrenme Yolu

Bu dosya repo'nun ana çalışma ekranıdır. Sadece burayı açık tutarak sırayla
ilerleyebilir, her konuya tıklayarak gidebilir ve seviyeni kaybetmeden tekrar
Learning Path'e dönebilirsin.

## Nasıl Kullanılır?

1. Adımları sırayla takip et; erken atlama yapma.
2. Her `.c` dosyasında önce kodu oku, çıktıyı tahmin et, sonra derle ve çalıştır.
3. Örneği bitirdikten sonra küçük bir değişiklik yapıp tekrar dene.
4. Bir konuyu bitirmiş sayılmak için "Tamam sayılır" sütunundaki kontrolü yap.
5. Konu README'lerinin en altında Learning Path'e dönüş ve sıradaki adıma geçiş
   linkleri bulunur.

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

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 1 | [`../docs/build-guide.md`](../docs/build-guide.md) | Repo nasıl build edilir, CI neyi kontrol eder? | `make all` ve `make test` amacını açıklayabiliyorsan |
| 2 | [`notes/build_run_main_debugging.md`](notes/build_run_main_debugging.md) | `main`, build, run, debug döngüsü | Bir dosyanın neden çalıştırılabilir hale geldiğini anlatabiliyorsan |

## Seviye 1: Temel Sözdizimi

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 3 | [`fundamentals/variables_basics.c`](fundamentals/variables_basics.c) | Değişkenler, temel tipler, formatlı çıktı | Tip seçimini ve format specifier'ı eşleştirebiliyorsan |
| 4 | [`input_output/printf_examples.c`](input_output/printf_examples.c) | `printf`, hizalama, okunabilir çıktı | Kendi formatlı çıktını yazabiliyorsan |
| 5 | [`input_output/scanf_usage.c`](input_output/scanf_usage.c) | Input alma ve dönüş değeri kontrolü | Hatalı input'u yakalayan küçük bir örnek yazabiliyorsan |
| 6 | [`operators/arithmetic_ops.c`](operators/arithmetic_ops.c) | Aritmetik operatörler ve işlem sırası | Integer division etkisini açıklayabiliyorsan |
| 7 | [`operators/casting_examples.c`](operators/casting_examples.c) | Cast, veri kaybı, dönüşüm mantığı | Ne zaman explicit cast gerektiğini biliyorsan |
| 8 | [`operators/bool_const_define_sizeof.c`](operators/bool_const_define_sizeof.c) | `bool`, `const`, `#define`, `sizeof` | Sabit ve macro farkını açıklayabiliyorsan |
| 9 | [`operators/math_library_examples.c`](operators/math_library_examples.c) | `math.h` ve `-lm` bağlantısı | Math fonksiyonu kullanan dosyanın neden link istediğini biliyorsan |

## Seviye 2: Kontrol Akışı ve Döngüler

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 10 | [`control_flow/if_else_examples.c`](control_flow/if_else_examples.c) | Karar verme, guard condition | Hatalı input'u önce eleyebiliyorsan |
| 11 | [`control_flow/switch_case_examples.c`](control_flow/switch_case_examples.c) | Menü ve sabit seçenek akışı | `switch` ile küçük menü kurabiliyorsan |
| 12 | [`loops/for_while_do_examples.c`](loops/for_while_do_examples.c) | `for`, `while`, `do-while` farkı | Hangi döngüyü neden seçtiğini anlatabiliyorsan |
| 13 | [`loops/break_continue_rand.c`](loops/break_continue_rand.c) | `break`, `continue`, basit rastgelelik | Döngü kontrolünü bilinçli değiştirebiliyorsan |

## Seviye 3: Diziler, Stringler ve Fonksiyonlar

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 14 | [`arrays/arrays_and_strings_basics.c`](arrays/arrays_and_strings_basics.c) | Array index, char array, `'\0'` | C string'in nerede bittiğini açıklayabiliyorsan |
| 15 | [`arrays/multidimensional_arrays.c`](arrays/multidimensional_arrays.c) | 2D array ve satır/sütun gezme | Matrix'i row-major gezebiliyorsan |
| 16 | [`functions/functions_intro_return.c`](functions/functions_intro_return.c) | Fonksiyon, parametre, return | Tek işi olan küçük fonksiyon yazabiliyorsan |
| 17 | [`functions/array_parameter_examples.c`](functions/array_parameter_examples.c) | Array parametresi ve size taşıma | Fonksiyona array ile birlikte size vermeyi unutmuyorsan |
| 18 | [`functions/palindrome_solution.c`](functions/palindrome_solution.c) | Problem çözmede fonksiyonlara bölme | Kontrol fonksiyonunu ana akıştan ayırabiliyorsan |
| 19 | [`headers/header_usage_example.c`](headers/header_usage_example.c) | Header, declaration, include | `.h` dosyasının rolünü anlatabiliyorsan |

## Seviye 4: Pointerlar

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 20 | [`pointers/README.md`](pointers/README.md) | Pointer mental modeli | Adres, değer ve dereference farkını net anlatabiliyorsan |
| 21 | [`pointers/call_by_value_reference.c`](pointers/call_by_value_reference.c) | Value/reference davranışı | Fonksiyonun caller verisini ne zaman değiştirdiğini biliyorsan |
| 22 | [`pointers/null_pointer_and_array.c`](pointers/null_pointer_and_array.c) | `NULL`, array-pointer ilişkisi | `NULL` kontrolü neden gerekli anlatabiliyorsan |
| 23 | [`pointers/pointer_arithmetic_walkthrough.c`](pointers/pointer_arithmetic_walkthrough.c) | Pointer arithmetic | `ptr + 1` neden byte değil eleman ilerler biliyorsan |
| 24 | [`pointers/const_pointer_parameters.c`](pointers/const_pointer_parameters.c) | `const` pointer parametreleri | Fonksiyon sözleşmesini `const` ile ifade edebiliyorsan |
| 25 | [`pointers/dangling_pointer_warning.c`](pointers/dangling_pointer_warning.c) | Dangling pointer riski | Yaşam süresi biten adresin neden tehlikeli olduğunu biliyorsan |

## Seviye 5: Struct ve Union

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 26 | [`structs/README.md`](structs/README.md) | Struct kullanım alanları | Struct'ı paralel array yerine ne zaman seçeceğini biliyorsan |
| 27 | [`structs/struct_intro_and_array.c`](structs/struct_intro_and_array.c) | Struct tanımı ve struct array | Birden çok kaydı struct array ile tutabiliyorsan |
| 28 | [`structs/struct_pointer_update.c`](structs/struct_pointer_update.c) | Struct pointer ile güncelleme | `.` ve `->` farkını doğru kullanıyorsan |
| 29 | [`structs/struct_designated_initializers.c`](structs/struct_designated_initializers.c) | Designated initializer | Alan adıyla güvenli init yapabiliyorsan |
| 30 | [`structs/struct_nested_and_const.c`](structs/struct_nested_and_const.c) | Nested struct ve `const` kullanım | İç içe modeli okunur kurabiliyorsan |
| 31 | [`structs/struct_padding_alignment.c`](structs/struct_padding_alignment.c) | Padding, alignment, layout | Struct boyutunun alan toplamından farklı olabileceğini biliyorsan |
| 32 | [`unions/README.md`](unions/README.md) | Union mental modeli | Union'ın aynı belleği paylaşma mantığını açıklayabiliyorsan |
| 33 | [`unions/union_size_overlay.c`](unions/union_size_overlay.c) | Overlay ve size davranışı | Union size'ının en büyük üyeye göre oluştuğunu biliyorsan |
| 34 | [`unions/tagged_union_variant.c`](unions/tagged_union_variant.c) | Tagged union | Hangi union alanının aktif olduğunu tag ile izleyebiliyorsan |
| 35 | [`unions/protocol_message_union.c`](unions/protocol_message_union.c) | Protocol/message modeli | Union'ı gerçek mesaj modeli içinde okuyabiliyorsan |

## Seviye 6: Dinamik Bellek

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 36 | [`memory_management/README.md`](memory_management/README.md) | Heap, lifetime, ownership | Allocation sahibi kim sorusuna cevap verebiliyorsan |
| 37 | [`memory_management/union_example.c`](memory_management/union_example.c) | Memory overlay tekrarı | Union ile bellek paylaşımını tekrar okuyabiliyorsan |
| 38 | [`memory_management/malloc_calloc_free_examples.c`](memory_management/malloc_calloc_free_examples.c) | `malloc`, `calloc`, `free` | Her allocation için tek `free` planlıyorsan |
| 39 | [`memory_management/realloc_growth_buffer.c`](memory_management/realloc_growth_buffer.c) | Güvenli büyüyen buffer | `realloc` sonucunu geçici pointer ile kontrol ediyorsan |
| 40 | [`memory_management/ownership_transfer.c`](memory_management/ownership_transfer.c) | Ownership transfer | Dönen heap belleği kimin free edeceğini yazabiliyorsan |

## Seviye 7: Pratik Veri Yapıları

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 41 | [`data_structures/README.md`](data_structures/README.md) | C'de container mantığı | Array, dynamic array ve linked list trade-off anlatabiliyorsan |
| 42 | [`data_structures/dynamic_array.c`](data_structures/dynamic_array.c) | Vector benzeri büyüme | Capacity/size farkını biliyorsan |
| 43 | [`data_structures/singly_linked_list.c`](data_structures/singly_linked_list.c) | Singly linked list | Insert/search/delete/free akışını izleyebiliyorsan |
| 44 | [`data_structures/doubly_linked_list.c`](data_structures/doubly_linked_list.c) | Doubly linked list | `prev` ve `next` linklerini bozmadan güncelleyebiliyorsan |
| 45 | [`data_structures/intrusive_linked_list.c`](data_structures/intrusive_linked_list.c) | Intrusive list | Node bilgisinin nesne içinde yaşamasını anlayabiliyorsan |

## Seviye 8: Pratik C Interface Konuları

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 46 | [`function_pointers/README.md`](function_pointers/README.md) | Function pointer ve callback | Fonksiyonu veri gibi geçmenin amacını biliyorsan |
| 47 | [`function_pointers/callbacks_and_dispatch_table.c`](function_pointers/callbacks_and_dispatch_table.c) | Dispatch table | `switch` yerine tabloyla davranış seçebiliyorsan |
| 48 | [`error_handling/README.md`](error_handling/README.md) | C'de hata modeli | Return status + output parameter mantığını biliyorsan |
| 49 | [`error_handling/status_code_result.c`](error_handling/status_code_result.c) | Status code pattern | Hata ve sonucu aynı anda temiz taşıyabiliyorsan |
| 50 | [`strings_parsing/README.md`](strings_parsing/README.md) | Güvenli string parsing | `atoi` yerine neden `strtol` seçildiğini anlatabiliyorsan |
| 51 | [`strings_parsing/safe_token_parsing.c`](strings_parsing/safe_token_parsing.c) | Token ve sayı parse etme | Hatalı token'ı sessizce kabul etmiyorsan |
| 52 | [`modular_design/README.md`](modular_design/README.md) | Modüler C API | Header ve implementation ayrımını biliyorsan |
| 53 | [`modular_design/opaque_handle_pattern.c`](modular_design/opaque_handle_pattern.c) | Opaque handle | Struct içini API arkasına saklayabiliyorsan |

## Seviye 9: Dosya, Preprocessor ve Bitwise

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 54 | [`file_io/README.md`](file_io/README.md) | Dosya açma, okuma, yazma | `fopen` sonucunu kontrol edip kapatmayı unutmuyorsan |
| 55 | [`file_io/file_write_read_examples.c`](file_io/file_write_read_examples.c) | Temel read/write | Basit dosya çıktısını tekrar okuyabiliyorsan |
| 56 | [`file_io/line_based_records.c`](file_io/line_based_records.c) | Satır bazlı kayıt | `fgets` ile kayıt okuma mantığını kurabiliyorsan |
| 57 | [`file_io/binary_record_io.c`](file_io/binary_record_io.c) | Binary record I/O | Binary format ile text format farkını biliyorsan |
| 58 | [`preprocessor/README.md`](preprocessor/README.md) | Preprocessor mental modeli | Macro'nun compile öncesi çalıştığını biliyorsan |
| 59 | [`preprocessor/macro_constants_and_guards.c`](preprocessor/macro_constants_and_guards.c) | Macro constant ve include guard | Header guard amacını açıklayabiliyorsan |
| 60 | [`preprocessor/macro_pitfalls.c`](preprocessor/macro_pitfalls.c) | Macro riskleri | Macro parametre parantezi neden önemli biliyorsan |
| 61 | [`preprocessor/conditional_compilation.c`](preprocessor/conditional_compilation.c) | Conditional compilation | Build seçeneğine göre kod açıp kapatabiliyorsan |
| 62 | [`bitwise/README.md`](bitwise/README.md) | Bitwise mental model | Flag, mask, shift kavramlarını ayırabiliyorsan |
| 63 | [`bitwise/permission_flags.c`](bitwise/permission_flags.c) | Permission flag | Bit flag ile yetki tutabiliyorsan |
| 64 | [`bitwise/bit_masks_and_packing.c`](bitwise/bit_masks_and_packing.c) | Mask ve packing | Bir değeri bit alanına koyup çıkarabiliyorsan |
| 65 | [`bitwise/xor_toggle_demo.c`](bitwise/xor_toggle_demo.c) | XOR toggle | XOR'un toggle/cancel davranışını biliyorsan |

## Seviye 10: Algoritmalar, Problem Çözme ve Projeler

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 66 | [`algorithms/char_frequency.c`](algorithms/char_frequency.c) | Frequency array | Karakter sayma için küçük array kullanabiliyorsan |
| 67 | [`algorithms/most_frequent_character.c`](algorithms/most_frequent_character.c) | Max frequency | Sayımdan sonuç seçebiliyorsan |
| 68 | [`algorithms/search_algorithms.c`](algorithms/search_algorithms.c) | Linear/binary search | Sıralı veri için binary search seçebiliyorsan |
| 69 | [`algorithms/sorting_algorithms.c`](algorithms/sorting_algorithms.c) | Sorting mantığı | Basit sort adımlarını izleyebiliyorsan |
| 70 | [`algorithms/luhn_validator.c`](algorithms/luhn_validator.c) | Gerçek algoritma uygulaması | Kural setini kod akışına çevirebiliyorsan |
| 71 | [`problem_solving/`](problem_solving/) | Küçük senaryo problemleri | En az iki örneği değiştirip çalıştırdıysan |
| 72 | [`projects/library_management_cli.c`](projects/library_management_cli.c) | Tek dosya CLI proje | Menü, struct array ve input akışını okuyabiliyorsan |
| 73 | [`projects/library_management_file_persist.c`](projects/library_management_file_persist.c) | Dosya kalıcılığı olan proje | Verinin program kapanınca nasıl saklandığını biliyorsan |
| 74 | [`projects/library_management_modular/README.md`](projects/library_management_modular/README.md) | Modüler proje düzeni | `include/`, `src/`, `tests/` ayrımını anlayabiliyorsan |

## Seviye 11: LeetCode ile Pekiştirme

| Adım | Git | Çalışma odağı | Tamam sayılır |
| --- | --- | --- | --- |
| 75 | [`notes/leetcode_bridge.md`](notes/leetcode_bridge.md) | C konularını LeetCode pratiğine bağlamak | Her ana konu için seçilmiş sorulardan tekrar planı çıkarabiliyorsan |

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
