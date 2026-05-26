# Unionlar

`union`, farklı üyeleri aynı bellek alanında saklar. Tüm alanları aynı anda
tutan `struct`tan farklı olarak union genellikle aynı anda tek aktif anlam
taşımak için kullanılır.

## Union vs Struct

Struct:

```c
typedef struct
{
    int id;
    double fiyat;
} Urun;
```

`id` ve `fiyat` aynı anda vardır.

Union:

```c
typedef union
{
    int int_olarak;
    double double_olarak;
} Deger;
```

Üyeler aynı belleği paylaşır. `double_olarak` yazmak, `int_olarak` alanının da
okuyacağı aynı storage'ı değiştirir.

## sizeof

Union boyutu en az en büyük üyesi kadardır. Alignment için ek padding de
eklenebilir.

```c
sizeof(union) >= sizeof(en_buyuk_uye)
```

Bu yüzden union, bir değerin birkaç şekilden biri olabildiği ama hepsini aynı
anda taşımadığı durumlarda kullanışlıdır.

## Aktif Üye

Taşınabilir kod hangi üyenin anlamlı olduğunu takip etmelidir. Yaygın pattern
tagged union'dır:

```c
typedef enum
{
    DEGER_INT,
    DEGER_DOUBLE,
    DEGER_METIN
} DegerTipi;

typedef struct
{
    DegerTipi tip;
    union
    {
        int int_olarak;
        double double_olarak;
        char metin[32];
    } veri;
} Deger;
```

Tag, programın hangi union üyesini okuyacağını söyler.

## Ne Zaman Kullanılır?

Union şunlar için uygundur:

- değer birkaç tipten biri olabilir
- memory layout önemlidir
- binary format veya protocol parse edilir
- variant data modellenir
- hardware veya embedded register ile çalışılır

Sadece struct yazmamak veya gizli type conversion yapmak için union kullanma.

## Taşınabilirlik Uyarısı

Son yazılan üyeden farklı bir union üyesini okumak, kullanım amacına özel olarak
tanımlı değilse taşınabilir olmayabilir. Öğretici ve production kodda tagged
union kullanıp tag'in gösterdiği üyeyi okumak daha güvenlidir.

## Bu Klasördeki Dosyalar

- `union_size_overlay.c`: ortak storage ve `sizeof`.
- `tagged_union_variant.c`: güvenli variant value pattern'i.
- `protocol_message_union.c`: tag ve union ile message payload modeli.

## Gerçek Hayatta Kullanım

Union interpreter, parser, protocol payload, embedded register view, token
değeri, AST node ve variant data taşıyan API'lerde kullanılır.

## Alıştırmalar

1. `int`, `double` veya `char[32]` tutabilen tagged union oluştur.
2. Tag'e göre çalışan `deger_yazdir` fonksiyonu ekle.
3. Aynı üyeleri taşıyan struct ve union için `sizeof` karşılaştır.
4. `LOGIN`, `DATA`, `PING` payload'ları olan network message modeli kur.
5. Yanlış üyeyi okumanın neden tehlikeli olduğunu açıkla.

## Tekrar Soruları

1. `struct` ve `union` arasındaki temel fark nedir?
2. Güvenli kodda union neden tag'e ihtiyaç duyar?
3. `sizeof(union)` nasıl belirlenir?
4. Sistem programlamada union ne zaman işe yarar?
5. Yanlış üyeyi okursan ne ters gidebilir?

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: union_size_overlay.c](../study/033-union-size-overlay.md) |
