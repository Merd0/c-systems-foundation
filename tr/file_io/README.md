# Dosya İşlemleri

Dosya işlemleri, C programının veriyi process belleği dışında kalıcı hale
getirmesini sağlar. CLI araçları kayıt saklamak, config okumak, log yazmak,
CSV benzeri metin import etmek veya binary veri tutmak için dosya kullanır.

## Mental Model

C açık dosyayı `FILE *` stream ile temsil eder:

```c
FILE *fp = fopen("data.txt", "r");
```

Stream kapatılmalıdır:

```c
fclose(fp);
```

Stream'i kullanmadan önce `fopen` başarılı mı kontrol et.

## Yaygın Modlar

- `"r"`: var olan text dosyasını oku
- `"w"`: text dosyasına yaz, eski içeriği siler
- `"a"`: sona ekle
- `"rb"`: binary oku
- `"wb"`: binary yaz
- `"r+"`: var olan dosyayı oku ve yaz

İnsan tarafından okunabilir formatlar için text mode, raw byte veya sabit kayıt
yapıları için binary mode kullanılır.

## Text I/O

Satır bazlı input için `fgets` tercih et:

```c
char satir[128];
if (fgets(satir, sizeof(satir), fp) != NULL)
{
    /* satiri parse et */
}
```

Formatlı çıktı için `fprintf` kullan:

```c
fprintf(fp, "%d|%s|%.2f\n", id, ad, fiyat);
```

`fscanf` kontrollü formatlarda işe yarar, ama veri boşluk, eksik alan veya bozuk
input içerdiğinde kırılgan hale gelir.

## Binary I/O

Binary I/O için `fread` ve `fwrite` kullanılır.

```c
fwrite(kayitlar, sizeof(kayitlar[0]), adet, fp);
fread(kayitlar, sizeof(kayitlar[0]), adet, fp);
```

Struct'ı doğrudan binary dosyaya yazmayı taşınabilir format sanma. Padding,
endianness, compiler ayarları ve versiyon değişimleri uyumluluğu bozabilir.

## Hata Yönetimi

Dosya işlemlerini kontrol et:

```c
FILE *fp = fopen("data.txt", "r");
if (fp == NULL)
{
    perror("data.txt");
    return 1;
}
```

`perror`, `errno` değerine göre hata mesajı basar.

## Cleanup Kuralları

- Başarıyla açılan her dosyayı kapat.
- Cleanup yapılmadıysa erken `return` ile `fclose` atlama.
- Partial read/write durumlarını mümkün hata olarak düşün.
- Gerçek uygulamada dosya yollarını configurable tut.

## Bu Klasördeki Dosyalar

- `file_write_read_examples.c`: temel yazma, append ve okuma.
- `line_based_records.c`: satır bazlı persistence ve parsing.
- `binary_record_io.c`: `fread` ve `fwrite` ile basit binary kayıt.

## Gerçek Hayatta Kullanım

Dosya işlemleri log, config dosyası, CLI persistence, import/export aracı, save
file, embedded data dump ve hafif local storage için kullanılır.

## Alıştırmalar

1. Üç ürün kaydını text dosyasına yaz ve geri oku.
2. Her başarısız `fopen` için `perror` ekle.
3. `ad|fiyat|stok` satırını güvenli parse et.
4. Struct dizisini `fwrite` ile kaydet, `fread` ile geri yükle.
5. Text formatların neden çoğu zaman binary formatlardan kolay debug edildiğini açıkla.

## Tekrar Soruları

1. `fopen` sonucu neden kontrol edilmelidir?
2. `"w"` ile `"a"` arasındaki fark nedir?
3. Text input için `fgets` neden çoğu zaman `fscanf`ten güvenlidir?
4. Binary struct dosyalarını taşınamaz yapan şeyler nelerdir?
5. Dosya açıldıktan sonra fonksiyon ileride hata alırsa ne yapmalıdır?

---

| Geri | Sıradaki |
| --- | --- |
| [Öğrenme Yoluna Dön](../LEARNING_PATH.md) | [Sıradaki: file_write_read_examples.c](../study/055-file-write-read-examples.md) |
