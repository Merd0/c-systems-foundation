# Modüler C Ve Opaque Handle

Büyük C programları genelde implementation detaylarını küçük API'ların arkasına
saklar. Opaque handle pattern'i caller'ın bir tipi iç alanlarını bilmeden
kullanmasını sağlar.

## Mental Model

- Header public API'ı göstermeli, private alanları açmamalıdır.
- Source file implementation detaylarını sahiplenir.
- Opaque type header'da declare edilir, source dosyada define edilir.
- Create/destroy fonksiyonları ownership'i açık yapar.
- Bu pattern library, embedded driver ve platform API'larında sık görülür.

## Yaygın Hatalar

- Caller'ın direkt değiştirmemesi gereken struct alanlarını açmak.
- Allocate edilen handle için karşılık gelen destroy fonksiyonunu unutmak.
- Kısmen initialize edilmiş object döndürmek.
- Ownership kuralını caller'dan saklamak.

## Örnek

- `opaque_handle_pattern.c`: tek dosyada public API ve private implementation
  ayrımını gösterir.

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: opaque_handle_pattern.c](opaque_handle_pattern.c) |
