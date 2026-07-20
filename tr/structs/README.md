# Structs

`struct`, C dilinde birbiriyle ilişkili verileri tek bir tip altında toplamak
için kullanılır. Ürün, öğrenci, kullanıcı, dosya kaydı, koordinat, ayar bilgisi
ve linked list düğümü gibi kayıt tabanlı modeller struct ile temsil edilir.

## Neden Önemlidir?

Struct olmadan ilişkili veriler çoğu zaman paralel dizilere bölünür:

```c
int idler[100];
double fiyatlar[100];
int stoklar[100];
```

Bu yapı kırılgandır çünkü `idler[i]`, `fiyatlar[i]` ve `stoklar[i]` her zaman
aynı kaydı temsil etmek zorundadır. Struct ile bir kayıt kendi alanlarını taşır:

```c
typedef struct
{
    int id;
    double fiyat;
    int stok;
} Urun;
```

## Tanımlama Biçimleri

Etiketli klasik struct:

```c
struct Urun
{
    int id;
    double fiyat;
};
```

`typedef` ile kullanım:

```c
typedef struct
{
    int id;
    double fiyat;
} Urun;
```

İkisi de geçerlidir. Etiketli kullanım, linked list gibi kendi tipine pointer
tutan yapılarda özellikle işe yarar:

```c
typedef struct Dugum
{
    int deger;
    struct Dugum *sonraki;
} Dugum;
```

## Alanlara Erişim

Elinde struct değişkeninin kendisi varsa `.` kullanılır:

```c
urun.stok = 10;
```

Elinde struct pointer'ı varsa `->` kullanılır:

```c
urun_ptr->stok = 10;
```

`ptr->alan`, aslında `(*ptr).alan` yazımının kısa halidir.

## Fonksiyona Struct Göndermek

Value ile göndermek tüm struct'ı kopyalar:

```c
void urun_yazdir(Urun urun);
```

Pointer ile göndermek kopyayı önler ve değişiklik yapmayı sağlar:

```c
void stok_guncelle(Urun *urun, int miktar);
```

`const` pointer ile göndermek kopyayı önler ama fonksiyonun struct'ı
değiştirmesini engeller:

```c
void urun_yazdir(const Urun *urun);
```

Gerçek kodda sadece okuma yapan fonksiyonlar için çoğunlukla `const Urun *`
tercih edilir.

## Başlatma Yöntemleri

Sıralı başlatma alan sırasına bağımlıdır:

```c
Urun klavye = {101, 79.99, 12};
```

Designated initializer, alan isimlerini açıkça yazar ve büyük struct'larda daha
okunabilirdir:

```c
Urun klavye = {
    .id = 101,
    .fiyat = 79.99,
    .stok = 12,
};
```

## Memory Layout ve Padding

C, CPU'nun veriye daha verimli erişebilmesi için struct alanları arasına padding
byte'ları ekleyebilir. Bu yüzden `sizeof(struct)`, alanların tek tek
boyutlarının toplamından büyük çıkabilir.

Alan sırası struct boyutunu değiştirebilir. Bu konu sistem programlama, embedded
geliştirme, dosya formatları, network paketleri ve büyük kayıt dizileri için
önemlidir.

Örnek: `struct_padding_alignment.c`.

## Shallow Copy ve Deep Copy

Bir struct'ı diğerine atamak alanları kopyalar. Struct sadece düz değerler
içeriyorsa bu çoğu zaman güvenlidir.

Struct pointer alanı içeriyorsa atama sadece adresi kopyalar; heap'teki veriyi
kopyalamaz. Buna shallow copy denir. Deep copy için yeni bellek ayrılır ve
pointer'ın gösterdiği veri ayrıca kopyalanır. Bu konu memory management
bölümünde büyütülecek, ama struct pointer alanı tuttuğu anda önem kazanmaya
başlar.

## Sık Yapılan Hatalar

- Pointer üzerinde `.` kullanmak yerine `->` kullanılması gerektiğini unutmak.
- Local struct değişkeninin adresini döndürmek.
- Struct pointer'ını kontrol etmeden dereference etmek.
- Sahiplik kuralı tanımlamadan pointer içeren struct'ları kopyalamak.
- `sizeof(struct)` sonucunun sadece alan boyutlarının toplamı olduğunu sanmak.
- Padding, endianness ve versiyonlama düşünmeden struct'ı doğrudan binary dosyaya
  yazmak.

## Bu Klasördeki Dosyalar

- `struct_intro_and_array.c`: temel `typedef struct` ve struct dizisi.
- `struct_pointer_update.c`: struct'ı pointer ile fonksiyona gönderip güncelleme.
- `struct_designated_initializers.c`: alan isimleriyle daha okunabilir başlatma.
- `struct_nested_and_const.c`: nested struct ve read-only pointer parametreleri.
- `struct_padding_alignment.c`: layout, padding ve `offsetof`.

## Gerçek Hayatta Nerede Kullanılır?

Struct C kodunun her yerinde karşına çıkar:

- CLI uygulamaları parse edilen komut verisini struct içinde tutar.
- Embedded sistemler sensör okumalarını ve cihaz durumunu struct ile temsil eder.
- İşletim sistemi API'leri dosya, process ve socket bilgilerini struct ile verir.
- Parser'lar token ve syntax node yapılarını struct ile kurar.
- Linked list, queue, hash table ve tree gibi veri yapıları struct ve pointer
  üzerine kurulur.

## Alıştırmalar

1. `Ogrenci` struct'ına `email` alanı ekle ve ekrana yazdır.
2. `const Urun *` alan bir fonksiyon yazıp ürünü tablo satırı gibi yazdır.
3. Beş ürünlük bir dizi oluşturup toplam stok değerini hesapla.
4. `Musteri` struct'ının içine nested `Adres` struct'ı ekle.
5. `struct_padding_alignment.c` içinde alan sırasını değiştirip `sizeof`
   sonucunu karşılaştır.

## Tekrar Soruları

1. `.` ve `->` arasındaki fark nedir?
2. Sadece okuma yapan fonksiyonlarda `const StructAdi *` neden kullanılır?
3. Struct kopyalamak hangi durumda tehlikeli hale gelir?
4. `sizeof(struct)` neden beklenenden büyük çıkabilir?
5. Ayrı diziler yerine struct kullanmak ne zaman daha doğrudur?

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: struct_intro_and_array.c](struct_intro_and_array.c) |
