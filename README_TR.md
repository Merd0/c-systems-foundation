# C Systems Foundation

[English](README.md) | Türkçe

C dilini ve sistem programlama temellerini çalışan örnekler, konu referansları ve küçük projelerle adım adım geliştirmek için tutulan düzenli bir öğrenme reposu.

[Öğrenmeye Başla](tr/LEARNING_PATH.md) | [Konulara Göz At](docs/topic-index.md) | [Projeleri Aç](#projeler) | [Kaldığın Yerden Devam Et](STUDY_TRACKER.md) | [English](README.md)

## Bu Repo Ne Sunuyor?

- `en/` ve `tr/` altında birbirine paralel İngilizce ve Türkçe çalışma rotaları
- Build mantığından pointer, ownership, veri yapıları, dosya işlemleri ve bitwise konularına uzanan doğrulanmış 75 adım
- Tek başına derlenebilen küçük C11 örnekleri
- Bellek, struct, union, parsing, callback ve modüler C API tasarımı için ayrıntılı konu notları
- Tek dosyalı CLI'dan dosya kalıcılığına ve testli modüler yapıya ilerleyen kütüphane yönetimi çalışması

## Nereden Başlamalıyım?

1. Ana rota olarak [Türkçe Öğrenme Yolu](tr/LEARNING_PATH.md) dosyasını aç.
2. Her adımda doğrudan bağlanan kaynak kodu veya konu notunu incele.
3. Kodu çalıştırmadan önce sonucu tahmin et, sonra küçük bir değişiklik yapıp tekrar dene.
4. Öğrenme yolundaki bitirme ölçütünü sağladığında [STUDY_TRACKER.md](STUDY_TRACKER.md) üzerinden adımı işaretle.

Belirli bir konuyu hızlıca bulmak için [konu indeksi](docs/topic-index.md) veya [Türkçe referans indeksi](tr/REFERENCE_INDEX.md) kullanılabilir.

## Öğrenme Haritası

| Seviye | Odak |
| --- | --- |
| 00 | Araçlar, build, run ve debugging |
| 01 | C temelleri, girdi/çıktı ve operatörler |
| 02 | Kontrol akışı ve döngüler |
| 03 | Diziler, stringler, fonksiyonlar ve header dosyaları |
| 04 | Pointerlar ve fonksiyon arayüzleri |
| 05 | Struct, union, bellek yerleşimi ve tagged data |
| 06 | Dinamik bellek, yaşam süresi ve ownership |
| 07 | Dynamic array ve bağlı veri yapıları |
| 08 | Callback, hata yönetimi, parsing ve modüler API |
| 09 | Dosyalar, preprocessor ve bitwise işlemler |
| 10 | Algoritmalar, uygulamalı örnekler ve projeler |
| 11 | LeetCode ile pekiştirme köprüsü |

Bu seviyeler öğrenme sırasını mantıksal olarak gruplar. Dil klasörleri ise yerelleştirilmiş kod ve açıklamaların kolay bulunmasını sağlar.

## Uygulamalı Konular

- Pointer arithmetic, `const` sözleşmeleri ve dangling pointer riskleri
- Struct padding, tagged union ve protokol mesajı modelleme
- `malloc`, `calloc`, `realloc`, ownership transfer ve temizleme
- Dynamic array, singly/doubly linked list ve intrusive list
- Callback tabloları, status-code API'leri, güvenli token parsing ve opaque handle
- Metin/binary dosya kayıtları, macro, flag, mask ve bit packing

## Projeler

| Proje | Türkçe | English | Odak |
| --- | --- | --- | --- |
| Kütüphane CLI | [Kaynak](tr/projects/library_management_cli.c) | [Source](en/projects/library_management_cli.c) | Menü akışı, struct dizisi, input kontrolü |
| Dosya kalıcılığı | [Kaynak](tr/projects/library_management_file_persist.c) | [Source](en/projects/library_management_file_persist.c) | Kalıcı kayıt ve dosya işlemleri |
| Modüler kütüphane | [Proje](tr/projects/library_management_modular/README.md) | [Project](en/projects/library_management_modular/README.md) | `include/`, `src/`, testler ve yerel Makefile |

## Derleme Ve Test

Kök Makefile C kaynaklarını doğrudan dosya sisteminden bulur, tek dosyalı örnekleri C11 ve katı uyarı bayraklarıyla derler, ardından iki modüler proje sürümünü derleyip test eder. Kaynak keşfi Git clone, indirilen ZIP ve Git'e henüz eklenmemiş yeni örneklerde de çalışır.

```sh
make clean
make all
make test
python3 scripts/validate_repository.py
```

Kurulum ve Windows notları için [build rehberine](docs/build-guide.md) bak. Windows'ta `python3` yerine `py -3` kullanılabilir. GitHub Actions aynı build, test ve yapı doğrulamasını çalıştırır.

## Repo Yapısı

```text
.
|-- en/                     İngilizce dersler, örnekler ve projeler
|-- tr/                     Türkçe dersler, örnekler ve projeler
|-- docs/                   Build, stil, yapı ve konu rehberleri
|-- scripts/                Hafif repo doğrulama aracı
|-- STUDY_TRACKER.md        İlerleme kontrol listesi
|-- Makefile                Tüm build ve modüler test girişi
`-- README.md               İngilizce ana sayfa
```

Kod ağaçları paralel tutuldu; çünkü eşleşen dosyaların büyük bölümü yalnızca kopya değil, yerelleştirilmiş isimler, çıktılar veya eğitim bağlamı taşıyor. Ayrıntılı karar ve bakım kuralları [repo yapısı belgesinde](docs/repository-structure.md) bulunuyor.

## Algoritma Pratiğine Geçiş

İlgili C temelini tamamladıktan sonra [Merd0/leetcode-c-solutions](https://github.com/Merd0/leetcode-c-solutions) reposundaki seçilmiş algoritma çalışmalarına geç. [LeetCode köprüsü](tr/notes/leetcode_bridge.md), C konularını uygun sorularla eşleştirir.

## Proje Durumu

Bu repo gelişmeye devam eden bir öğrenme arşividir. Yeni örnekler eklenirken mevcut build, test ve yapı doğrulamalarının çalışır kalması hedeflenir.
