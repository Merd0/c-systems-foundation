# C Systems Foundation — Derleme Rehberi

**[English](build-guide.md) | Türkçe**

Bu depo, birbirinden bağımsız küçük C örnekleri etrafında düzenlenmiştir. Bir klasörün açıklamasında aksi belirtilmedikçe her `.c` dosyası tek başına derlenebilmelidir.

## Önerilen derleyici ayarları

C11 desteği olan güncel bir C derleyicisi kullan:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic path/to/example.c -o build/example -lm
```

Bayrakların amacı:

- `-std=c11`: Öngörülebilir bir C standardı kullanmak.
- `-Wall -Wextra`: Başlangıçta çok sayıda olası hataya karşı uyarı almak.
- `-Wpedantic`: Standart dışı uzantılara ilişkin uyarıları göstermek.
- `-lm`: `math.h` kullanan bazı örnekler için matematik kütüphanesini bağlamak.

## Bütün örnekleri derlemek

Linux veya GitHub Actions ortamında:

```sh
make all
```

Makefile, ek bağımlılık gerektirmeyen `scripts/list_c_sources.py` yardımcı betiğini kullanır. Bu betik `en/` ve `tr/` klasörlerini doğrudan tarar, modüler proje ve build klasörlerini hariç tutar. Dolayısıyla `.git` klasörü olmasa da çalışır ve henüz Git'e eklenmemiş uygun örnekleri de bulabilir.

Kaynak yolları küçük harfli `snake_case` biçimindedir ve boşluk içermemelidir.

Modüler proje testleri:

```sh
make test
```

Müfredat eşdeğerliği, Markdown bağlantıları ve UTF-8 metin kontrolü:

```sh
python3 scripts/validate_repository.py
```

Windows'ta `python3` yoksa `py -3` kullanabilirsin. Make komutuyla aynı Python başlatıcısını kullanmak için:

```sh
make PYTHON="py -3" all
```

Üretilen dosyaları temizle:

```sh
make clean
```

## Windows notları

Aşağıdaki seçeneklerden birini kullanabilirsin:

- MSYS2 veya MinGW kurarak `make all` çalıştır.
- WSL üzerinden Linux komutlarını kullan.
- Tek bir kaynak dosyasını kurulu C derleyicinle derle.

Derlenmiş ikili dosyalar Git deposuna eklenmez; çıktıların yeri `build/` klasörüdür.

## CI kontrolleri

GitHub Actions; müfredat yapısını, göreli bağlantıları, kaynak dosya eşdeğerliğini ve kodlamayı denetler. Ayrıca `en/` ve `tr/` içindeki tek başına derlenebilir bütün `.c` dosyalarını derler, modüler projeleri ve testlerini çalıştırır, denetimler sonrasında üretilmiş Git farkı kalmadığını doğrular.

Hatalı bir C örneği, modüler proje testi, öğrenme yolu bağlantısı veya dokümantasyon bağlantısı CI sonucunu başarısız yapabilir.

---

| Türkçe | English |
| --- | --- |
| [Türkçe öğrenme yolu](../tr/LEARNING_PATH.md) | [English learning path](../en/LEARNING_PATH.md) |
| [Sonraki TR dersi: build/run/debug](../tr/notes/build_run_main_debugging.md) | [Next EN lesson: build/run/debug](../en/notes/build_run_main_debugging.md) |
