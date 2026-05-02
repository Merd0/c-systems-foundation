# Konu Bazlı Mini Taktikler

## Input alma
- `scanf` sonrasında metin alacaksan buffer temizliği yap.
- `scanf(...) != 1` kontrolü ile hatalı girişi erken yakala.
- `gets` yerine `fgets` kullan.

## printf kullanımı
- Format tipini değişken tipiyle eşleştir.
- Ondalık gösterimi için `%.2f` gibi hassasiyet kullan.
- `\n` ve `\t` ile çıktıyı okunabilir yap.

## if-else yazımı
- Önce hatalı input'u ele, sonra ana mantığı yaz.
- Koşulları karmaşıklaştırmadan küçük parçalara böl.

## casting
- Tam sayı bölmesinde ondalık sonuç istersen cast uygula: `(double)a / b`.
- Veri kaybı olabileceğini unutma (`(int)19.99 -> 19`).

## debugging
- Beklenen çıktı ile gerçek çıktıyı karşılaştır.
- Kritik satırlara breakpoint koy.
- Hata anında değişken değerini adım adım izle.
