# C'de Hata Yönetimi Patternleri

C'de exception yoktur. Production C kodu genelde hata bilgisini status code,
output parameter, sentinel değer veya küçük result struct ile taşır.

## Mental Model

- Caller hatanın nedenini bilmeliyse status code döndür.
- Başarılı sonucu output parameter ile ver.
- Fonksiyon memory allocate ediyorsa ownership kuralını net yaz.
- API sınırında input validation yap.
- `0 başarıdır` ve `1 başarıdır` yaklaşımlarını karıştırma; dokümante et.

## Yaygın Hatalar

- Return value kontrol etmemek.
- Ownership açıklamadan pointer döndürmek.
- Hata yazdırıp yine başarılı gibi devam etmek.
- Failure durumunda output parameter'ı anlamsız değiştirmek.

## Örnek

- `status_code_result.c`: status enum + output parameter + validation.

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: status_code_result.c](status_code_result.c) |
