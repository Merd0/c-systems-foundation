# Build, Run, main() ve Debugging

## Build nedir?
Build, C kodunun derlenip çalıştırılabilir çıktıya dönüştürülmesidir.

## Run nedir?
Run, derlenmiş programı çalıştırmaktır.

## Build vs Run
- Build: sözdizimi/derleme hataları burada çıkar.
- Run: mantık ve çalışma zamanı hataları burada görülür.

## main() ne yapar?
Program `main()` fonksiyonundan başlar.

## return 0 ne demek?
Programın başarılı tamamlandığını belirtir.

## Debugging mantığı
- Breakpoint koy
- Satır satır ilerle
- Değişkenleri izle
- Beklenen/gerçek çıktıyı karşılaştır

## Daha iyi pratikler
- `gets` kullanma, risklidir.
- Metin input'u için `fgets` kullan.
- `scanf` dönüş değerini kontrol et.
- `printf` formatlarını doğru tiplerle eşleştir.
