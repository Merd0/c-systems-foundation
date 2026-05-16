# Modüler Kütüphane Yönetimi Projesi

Bu proje, tek dosyalık kütüphane örneklerinin daha profesyonel sürümüdür.
Public declaration, implementation, uygulama akışı ve testler ayrı tutulur.

## Yapı

```text
library_management_modular/
  include/library.h
  src/library.c
  src/main.c
  tests/test_library.c
  Makefile
```

## Neden Önemli?

Tek dosyalık örnekler syntax öğrenmek için iyidir. Gerçek projelerde ise
sorumlulukları ayırmak gerekir:

- `include/library.h`: public API ve veri tipleri
- `src/library.c`: iş mantığı
- `src/main.c`: kullanıcıya bakan uygulama akışı
- `tests/test_library.c`: core davranışları test eden küçük testler

## Build

```sh
make
```

## Test

```sh
make test
```

## Çalışılan Kavramlar

- header/source ayrımı
- küçük public API tasarımı
- struct tabanlı state
- sınırlı string kopyalama
- status döndüren fonksiyonlar
- `assert` tabanlı testler
