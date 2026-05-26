# Bellek Yönetimi

Bellek yönetimi, verinin nerede tutulacağını, ne kadar yaşayacağını ve onu kimin
serbest bırakacağını belirlediğin C alanıdır.

## Bellek Yaşam Alanları

Önemli kategoriler:

- automatic storage: local değişkenler, çoğunlukla stack üzerinde
- static storage: global ve `static` nesneler, program boyunca yaşar
- dynamic storage: `malloc`, `calloc`, `realloc` ile ayrılan heap belleği

Stack belleği fonksiyon bitince otomatik temizlenir. Heap belleği ise `free`
çağırana kadar yaşamaya devam eder.

## Temel Heap Fonksiyonları

```c
void *malloc(size_t size);
void *calloc(size_t count, size_t size);
void *realloc(void *ptr, size_t new_size);
void free(void *ptr);
```

- `malloc` initialize edilmemiş bellek ayırır.
- `calloc` bellek ayırır ve sıfırlar.
- `realloc` mevcut allocation boyutunu değiştirir.
- `free` heap belleğini serbest bırakır.

Allocation sonucunu her zaman kontrol et:

```c
int *elemanlar = malloc(adet * sizeof(*elemanlar));
if (elemanlar == NULL)
{
    return false;
}
```

## Ownership Kuralları

Her allocation'ın net bir sahibi olmalıdır. Sahip, `free` işlemini tam olarak
bir kez yapmaktan sorumludur.

İyi API bunu görünür yapar:

```c
char *satir_kopyala(void);      // dönen belleğin sahibi caller
void buffer_yok_et(char *buf);  // sahip olunan belleği serbest bırakır
```

## Yaygın Hata Türleri

- memory leak: ayrılan bellek hiç serbest bırakılmaz
- double free: aynı allocation iki kez free edilir
- use-after-free: bellek serbest bırakıldıktan sonra kullanılır
- dangling pointer: yaşam süresi bitmiş nesneyi gösteren pointer
- buffer overflow: ayrılan sınırın dışına yazmak
- allocation overflow: `adet * sizeof(T)` allocation öncesi taşar

## realloc Güvenliği

Orijinal pointer'ı doğrudan ezme:

```c
int *gecici = realloc(elemanlar, yeni_adet * sizeof(*elemanlar));
if (gecici == NULL)
{
    free(elemanlar);
    return false;
}
elemanlar = gecici;
```

`realloc` başarısız olursa eski pointer hala geçerlidir. Geçici pointer
kullanmak eski allocation'ı kaybetmeni önler.

## Cleanup Pattern

Bir fonksiyonda birden fazla allocation varsa tek cleanup yolu kullanmak
okunabilirliği artırır:

```c
bool basarili = false;
char *isim = malloc(32);
int *notlar = malloc(10 * sizeof(*notlar));

if (isim == NULL || notlar == NULL)
{
    goto cleanup;
}

basarili = true;

cleanup:
free(notlar);
free(isim);
return basarili;
```

Bu stil C'de yaygındır çünkü cleanup işini tek yerde toplar.

## Bu Klasördeki Dosyalar

- `malloc_calloc_free_examples.c`: temel allocation ve cleanup.
- `union_example.c`: giriş seviyesinde memory overlay örneği.
- `realloc_growth_buffer.c`: güvenli büyüyen dizi pattern'i.
- `ownership_transfer.c`: kimin `free` edeceğini belgeleyen örnek.

## Gerçek Hayatta Kullanım

Bellek yönetimi parser, server, embedded sistem, CLI tool, image processing,
networking, database engine ve boyutu compile-time'da bilinmeyen veriyle çalışan
neredeyse her C programında karşına çıkar.

## Alıştırmalar

1. Kullanıcıdan alınan adede göre dizi allocate et ve initialize et.
2. İki allocation yapan fonksiyon için cleanup yolu yaz.
3. `realloc` ile büyüyen integer buffer oluştur.
4. `realloc(ptr, size)` için neden geçici pointer gerektiğini açıkla.
5. Heap memory döndüren bir fonksiyon için ownership yorumları yaz.

## Tekrar Soruları

1. Stack ve heap lifetime farkı nedir?
2. Her başarılı allocation neden bir `free` ile eşleşmelidir?
3. Use-after-free nedir?
4. `adet * sizeof(T)` neden riskli olabilir?
5. Bir fonksiyonda ikinci allocation başarısız olursa ne yapılmalıdır?

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: union_example.c](../study/037-union-example.md) |
