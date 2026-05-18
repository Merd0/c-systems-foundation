# C Systems Foundation

Bu repo, C öğrenme sürecini **başlangıçtan mini-proje seviyesine** kadar
sistemli şekilde ilerletmek için tasarlandı.
This repository is designed to guide C learning **from beginner fundamentals to
mini-project level** in a structured way.

## 🎯 Repo Amacı / Repo Goal
- Konuları dağınık değil, tek bir büyüyen yapı içinde toplamak.
- Teori + çalışan örnek + uygulamalı senaryo yaklaşımı ile kalıcı öğrenme sağlamak.
- Kod yazarken sadece "doğru sonuç" değil, "okunabilirlik, güvenlik, sürdürülebilirlik" alışkanlığı kazandırmak.
- Build/run/debug döngüsünü gerçekçi şekilde öğretmek.

## 🌍 Dil Yapısı / Language Structure
- Türkçe içerik: [`tr/README.md`](tr/README.md)
- English content: [`en/README.md`](en/README.md)
- TR öğrenme sırası: [`tr/LEARNING_PATH.md`](tr/LEARNING_PATH.md)
- EN learning sequence: [`en/LEARNING_PATH.md`](en/LEARNING_PATH.md)

## 🧭 Bu repoda neler öğreneceksin? / What you'll learn
- C temelleri: değişkenler, veri tipleri, formatlı çıktı, input
- Kontrol akışı: if-else, switch, döngüler
- Diziler, fonksiyonlar, algoritma mantığı
- Pointer, struct, union, dinamik bellek yönetimi
- Linked list, dynamic array ve C'de pratik veri yapıları
- Function pointer, callback, status-code hata yönetimi
- Safe string parsing ve modüler C API tasarımı
- Dosya işlemleri ve kalıcılık (persistence)
- Preprocessor, bitwise işlemler ve sistem programlama temelleri
- Problem çözme ve mini proje geliştirme

## 🛠 Öğrenme Yöntemi / How to use this repo
1. `LEARNING_PATH.md` sırasını takip et.
2. Her dosyayı derle ve çalıştır.
3. Kodun çıktısını tahmin et, sonra çalıştırıp karşılaştır.
4. Aynı örneğin küçük varyasyonlarını kendin yaz.
5. Hata aldığında debugger ve not dosyalarını kullan.

## Build / CI
- All standalone examples are compiled by GitHub Actions.
- Modular projects are built and tested by GitHub Actions.
- Local full build: `make all`
- Local tests: `make test`
- Clean build output: `make clean`
- Build notes: [`docs/build-guide.md`](docs/build-guide.md)

## ⚠️ Dikkat Edilecek Noktalar / Best Practices
- `scanf` dönüş değerini kontrol et.
- String input için `fgets` tercih et.
- `malloc/calloc` sonrası `NULL` kontrolü yap.
- `free` sonrası pointer'ı `NULL` yapmak iyi pratiktir.
- Kodu küçük fonksiyonlara bölmek okunabilirliği artırır.

## Repo Quality Standard
- Topic folders should grow into reference pages, not only code dumps.
- New examples should compile independently.
- English and Turkish tracks should stay structurally parallel but linguistically clean.
- Code style guide: [`docs/code-style.md`](docs/code-style.md)
- Topic template: [`docs/topic-template.md`](docs/topic-template.md)

## Deep-Dive Topics
- [`en/pointers`](en/pointers) / [`tr/pointers`](tr/pointers)
- [`en/structs`](en/structs) / [`tr/structs`](tr/structs)
- [`en/unions`](en/unions) / [`tr/unions`](tr/unions)
- [`en/memory_management`](en/memory_management) / [`tr/memory_management`](tr/memory_management)
- [`en/file_io`](en/file_io) / [`tr/file_io`](tr/file_io)
- [`en/preprocessor`](en/preprocessor) / [`tr/preprocessor`](tr/preprocessor)
- [`en/bitwise`](en/bitwise) / [`tr/bitwise`](tr/bitwise)
- [`en/data_structures`](en/data_structures) / [`tr/data_structures`](tr/data_structures)
- [`en/function_pointers`](en/function_pointers) / [`tr/function_pointers`](tr/function_pointers)
- [`en/error_handling`](en/error_handling) / [`tr/error_handling`](tr/error_handling)
- [`en/strings_parsing`](en/strings_parsing) / [`tr/strings_parsing`](tr/strings_parsing)
- [`en/modular_design`](en/modular_design) / [`tr/modular_design`](tr/modular_design)

## Quick Reference
- EN quick lookup: [`en/REFERENCE_INDEX.md`](en/REFERENCE_INDEX.md)
- TR hızlı referans: [`tr/REFERENCE_INDEX.md`](tr/REFERENCE_INDEX.md)

## 🚀 Hedef Profil
Bu repo, hem yeni başlayan öğrenciye hem de temelini güçlendirmek isteyen junior mühendise göre hazırlandı.
