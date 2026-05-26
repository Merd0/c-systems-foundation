# Pointerlar

Pointer, başka bir nesnenin bellek adresini tutan değişkendir. C'de pointer
bilmek, verinin sadece değerini değil nerede yaşadığını da anlamak demektir.

## Neden Önemlidir?

Pointerlara şunlar için ihtiyaç duyarsın:

- başka bir fonksiyondan değişken güncellemek
- dizileri ve büyük struct'ları verimli göndermek
- heap üzerinde dinamik bellek ayırmak
- linked list, tree, queue ve hash table gibi veri yapıları kurmak
- string, dosya, buffer ve işletim sistemi API'leriyle çalışmak
- `NULL` ile opsiyonel veri ifade etmek

## Mental Model

Belleği numaralı hücreler gibi düşün. Normal değişken değer tutar:

```c
int puan = 90;
```

Pointer bu değerin adresini tutar:

```c
int *puan_ptr = &puan;
```

Dereference etmek adresteki değere ulaşmaktır:

```c
*puan_ptr = 95;
```

Bu işlemden sonra `puan` da `95` olur.

## Temel Operatörler

- `&deger`: `deger` değişkeninin adresi
- `*ptr`: `ptr` içindeki adreste duran değer
- `ptr->alan`: struct pointer'ı üzerinden alan erişimi
- `ptr + n`: `n` byte değil, `n` eleman ilerler

## NULL

`NULL`, pointer'ın bilerek geçerli bir nesne göstermediğini ifade eder.

```c
int *ptr = NULL;
```

Pointer `NULL` olabilir durumdaysa dereference etmeden önce kontrol et:

```c
if (ptr != NULL)
{
    printf("%d\n", *ptr);
}
```

`NULL` pointer'ı dereference etmek undefined behavior'dır.

## Diziler ve Pointer Decay

Çoğu ifadede dizi adı ilk elemana pointer'a dönüşür:

```c
int degerler[] = {10, 20, 30};
int *p = degerler;
```

`degerler[i]` ile `*(degerler + i)` aynı elemana erişir. Bu yüzden dizi
parametreleri çoğu zaman pointer gibi görünür:

```c
int dizi_topla(const int *degerler, int uzunluk);
```

Pointer dizinin uzunluğunu taşımaz. Uzunluğu ayrıca göndermek gerekir.

## const ve Pointerlar

Bildirimleri değişken adından dışa doğru oku:

```c
const int *p;       // const int'e pointer, p ile *p değiştirilemez
int *const p;       // int'e const pointer, p başka adresi gösteremez
const int *const p; // const int'e const pointer
```

Sadece okuma yapan fonksiyonlarda `const T *` kullan:

```c
void degerleri_yazdir(const int *degerler, int uzunluk);
```

## Ownership

Bir pointer sahip olmadığı belleği gösterebilir veya sonradan `free` edilmesi
gereken heap belleğinin sahibi olabilir. İyi C kodu bu sahipliği açık eder.

Sahip olmayan pointer:

```c
void isim_yazdir(const char *isim);
```

Sahiplik döndüren pointer:

```c
char *isim_kopyala(const char *isim); // sonucu caller free etmeli
```

## Sık Hatalar

- `NULL` pointer'ı dereference etmek.
- Local değişkenin adresini döndürmek.
- `free` sonrası pointer'ı kullanmak.
- Aynı pointer'ı iki kez `free` etmek.
- Pointer arithmetic'in eleman boyutuna göre ilerlediğini unutmak.
- `malloc` sonucundaki orijinal pointer'ı kaybetmek.
- Dizi parametresinin uzunluğu bildiğini sanmak.

## Bu Klasördeki Dosyalar

- `call_by_value_reference.c`: value copy ve pointer ile güncelleme.
- `null_pointer_and_array.c`: güvenli pointer kontrolü ve dizi gezme.
- `pointer_arithmetic_walkthrough.c`: pointer hareketiyle dizi erişimi.
- `const_pointer_parameters.c`: read-only pointer parametresinde `const`.
- `dangling_pointer_warning.c`: local adres döndürmenin neden güvensiz olduğu.

## Gerçek Hayatta Kullanım

C sistem kodunun tabanında pointer vardır. Dosya API'leri `FILE *` kullanır,
dinamik bellek heap pointer'larıyla yönetilir, string'ler `char *` olarak
taşınır, veri yapıları node'ları pointer ile bağlar ve OS API'leri çoğu zaman
caller'ın verdiği buffer'ları pointer üzerinden doldurur.

## Alıştırmalar

1. İki integer'ı pointer ile swap eden fonksiyon yaz.
2. `const int *` alan ve dizideki en büyük değeri bulan fonksiyon yaz.
3. `[]` kullanmadan pointer arithmetic ile dizi elemanlarını yazdır.
4. Dizi parametresine neden ayrıca uzunluk gerektiğini açıkla.
5. `const char *` alan ve karakter sayan bir fonksiyon yaz.

## Tekrar Soruları

1. `ptr` ile `*ptr` arasındaki fark nedir?
2. `NULL` kontrolü neden önemlidir?
3. `array + 1` neden her zaman bir byte ileri demek değildir?
4. `const int *p` neyi korur?
5. Pointer'ın owning veya non-owning olması ne demektir?

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: call_by_value_reference.c](../study/021-call-by-value-reference.md) |
