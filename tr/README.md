# C Öğrenme Reposu (Türkçe)

## Amaç
Bu klasör, C öğrenme sürecini düzenli bir yapıda tutmak için hazırlanmıştır.
Konular kısa teori + çalışan örnek kod + hatalardan kaçınma notları şeklinde
ilerler.

## Öğrenme Yaklaşımı
- Ana çalışma ekranı olarak [`LEARNING_PATH.md`](LEARNING_PATH.md) dosyasını kullan
- Konuyu küçük parçalara böl
- Çalışan kodu derle/çalıştır
- Sık yapılan hataları gör
- Daha güvenli ve okunabilir yazımı öğren
- Aynı konuyu tekrar yazmak yerine genişlet
- Konu klasörlerindeki `README.md` dosyalarını tekrar referansı gibi kullan

## Konu Listesi
- fundamentals: değişkenler, temel tipler
- input_output: printf, scanf, fgets
- control_flow: if-else, mantıksal kontroller
- operators: aritmetik, math.h, casting
- debugging: temel hata ayıklama mantığı
- loops: for/while/do-while, break/continue, rand
- arrays: diziler, çok boyutlu diziler, karakter dizileri
- problem_solving: örnek soru/çözüm ve mini proje
- functions: fonksiyonlar, return, dizi parametresi, palindrom
- headers: header dosyaları ve include kullanımı
- pointers: pointer giriş, NULL pointer, call by value/reference
- structs: struct temel, struct dizisi, struct pointer güncelleme
- unions: union, tagged union, memory overlay
- memory_management: union, malloc/calloc/free
- file_io: dosya açma, yazma, append, okuma
- preprocessor: include, define, macro, conditional compilation
- bitwise: flag, mask, shift ve düşük seviye veri işlemleri
- data_structures: linked list, doubly linked list, intrusive list, dynamic array
- function_pointers: callback ve dispatch table
- error_handling: status code ve output parameter ile hata yönetimi
- strings_parsing: güvenli string parsing ve `strtol`
- modular_design: opaque handle ve modüler C API tasarımı
- projects: uçtan uca mini CLI projeler
- algorithms: arama, sıralama, metin analizi, luhn
- notes: build/run/main/return 0 referans notları
- notes/topic_tips.md: konu bazlı mini taktikler
- notes/real_world_usage_map.md: örneklerin sektördeki karşılığı

## Kalite Standardı
- Tüm örnekleri derlemek için: `make all`
- Modüler proje testlerini çalıştırmak için: `make test`
- Build notları: [`../docs/build-guide.md`](../docs/build-guide.md)
- Kod stili: [`../docs/code-style.md`](../docs/code-style.md)
- Yeni konu şablonu: [`../docs/topic-template.md`](../docs/topic-template.md)

## Derin Konular
Bu klasörler sadece örnek kod değil, tekrar açıldığında referans olacak şekilde
büyütülür:

- `pointers/`
- `structs/`
- `unions/`
- `memory_management/`
- `file_io/`
- `preprocessor/`
- `bitwise/`
- `data_structures/`
- `function_pointers/`
- `error_handling/`
- `strings_parsing/`
- `modular_design/`

## Hızlı Referans
Problemi hatırlayıp klasörü hatırlamadığında [`REFERENCE_INDEX.md`](REFERENCE_INDEX.md)
dosyasından doğrudan ilgili konuya gidebilirsin.

## Production Tarzı Pratik
`projects/library_management_modular/` klasörü küçük bir projeyi `include/`,
`src/` ve `tests/` olarak böler; local Makefile ve `assert` tabanlı testler
içerir.

## Bugün ne öğrendim
Build ile run arasındaki farkı netleştirdim. `main()` fonksiyonunun başlangıç
noktası olduğunu, `return 0` ifadesinin başarılı bitiş anlattığını öğrendim.
`printf` ile formatlı çıktı üretmeyi, input alırken `scanf` kontrolü yapmayı ve
`gets` yerine `fgets` kullanmanın neden güvenli olduğunu pekiştirdim.

## Ekstra Gerçekçi Örnekler
- `problem_solving/mini_atm_simulation.c`
- `problem_solving/student_stats_dashboard.c`

- `problem_solving/sales_report_generator.c`
- `problem_solving/user_role_access_simulation.c`

- `projects/library_management_cli.c`

- `LEARNING_PATH.md`: baştan sona takip sırası

## Yeni Eklenen Güçlü Uygulamalı Örnekler
- `problem_solving/password_strength_checker.c`
- `problem_solving/expense_tracker_summary.c`
- `problem_solving/inventory_stock_alert.c`
- `projects/library_management_file_persist.c`

## Algoritma Ekleri
- `algorithms/char_frequency.c`
- `algorithms/most_frequent_character.c`
- `algorithms/search_algorithms.c`
- `algorithms/sorting_algorithms.c`
- `algorithms/luhn_validator.c`
