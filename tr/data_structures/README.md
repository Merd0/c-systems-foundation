# C'de Veri Yapıları

C, C++ gibi hazır containerlar vermez. Bu yüzden küçük veri yapılarını çoğu
zaman kendin kurarsın veya projenin kendi container yardımcılarını kullanırsın.

## Mental Model

- Diziler contiguous bellektedir ve cache açısından verimlidir.
- Dynamic array `realloc` ile büyütülür.
- Linked list, node zaten eldeyken ekleme/silme işlemlerini kolaylaştırır.
- Linked list her node için ekstra pointer maliyeti taşır ve cache dostu
  değildir.
- Intrusive list, list node bilgisini nesnenin içine koyar; düşük seviye C
  kodunda sık görülen bir pattern'dir.

## Yaygın Hatalar

- Linked list içindeki her node'u free etmemek.
- Ekleme veya silme sırasında head pointer'ı kaybetmek.
- Dynamic array daha basit ve hızlıyken linked list kullanmak.
- Allocation failure kontrolü yapmamak.
- Silinmiş veya free edilmiş node pointer'ını kullanmak.

## Örnekler

- `singly_linked_list.c`: basit linked list için ekleme, arama, silme, temizleme.
- `doubly_linked_list.c`: previous/next linkleri ve tail insertion.
- `intrusive_linked_list.c`: systems-style C kodunda kullanılan düşük seviye
  linked list pattern'i.
- `dynamic_array.c`: `realloc` ile vector benzeri büyüme.

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: dynamic_array.c](../study/042-dynamic-array.md) |
