# Function Pointer Ve Callback

Function pointer, C kodunda davranışı veri gibi taşımayı sağlar. Driver, parser,
event sistemi, sıralama callback'i ve command dispatch tablolarında sık görülür.

## Mental Model

- Function pointer, imzası uyan bir fonksiyonun adresini tutar.
- Callback, başka bir fonksiyon tarafından daha sonra çağrılan fonksiyondur.
- Dispatch table, command ile handler eşleşmesi netse uzun `switch` bloklarını
  sadeleştirir.
- `void *context`, callback'e caller-owned state taşımak için sık kullanılır.

## Yaygın Hatalar

- Function pointer `NULL` mı kontrol etmeden çağırmak.
- Yanlış fonksiyon imzası kullanmak.
- Callback arkasına çok fazla logic saklamak.
- Context pointer'ı yanlış tipe cast etmek.

## Örnek

- `callbacks_and_dispatch_table.c`: table-driven command handling ve callback
  context mantığı.

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: callbacks_and_dispatch_table.c](callbacks_and_dispatch_table.c) |
