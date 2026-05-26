# String Ve Parsing

C'de string işleme bug üretmeye çok açıktır. Bounded copy, explicit length,
kontrollü parsing ve basit formatlar tercih edilmelidir.

## Mental Model

- C stringleri null-terminated karakter dizileridir.
- `fgets`, sınırsız input almaktan daha güvenlidir.
- `strtol`, `atoi` yerine daha iyi hata kontrolü sağlar.
- `strtok`, token ayırırken input buffer'ı değiştirir.
- Parsing, her alanı kullanmadan önce doğrulamalıdır.

## Yaygın Hatalar

- `gets` kullanmak.
- Input geçersizken bile `atoi` sonucuna güvenmek.
- `strtok` fonksiyonunun buffer'ı değiştirdiğini unutmak.
- Destination boyutunu kontrol etmeden string kopyalamak.

## Örnek

- `safe_token_parsing.c`: comma-separated record parse eder ve doğrular.

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: safe_token_parsing.c](../study/051-safe-token-parsing.md) |
