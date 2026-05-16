# Bitwise İşlemler

Bitwise işlemler integer değerlerin içindeki bitler üzerinde doğrudan çalışır.
Sistem programlama, embedded geliştirme, sıkıştırma, protokol, izin, flag ve
düşük seviye performans odaklı kodlarda sık kullanılır.

## Temel Operatörler

- `&`: bitwise AND
- `|`: bitwise OR
- `^`: bitwise XOR
- `~`: bitwise NOT
- `<<`: left shift
- `>>`: right shift

Örnek:

```c
unsigned int flagler = 0;
flagler |= 1u << 2;    // bit 2'yi set et
flagler &= ~(1u << 2); // bit 2'yi temizle
```

## Mental Model

Her bit bir evet/hayır durumunu temsil edebilir. Tek integer birçok flag
taşıyabilir:

```text
bit 0: okuma izni
bit 1: yazma izni
bit 2: çalıştırma izni
```

Bu yapı kompakt ve hızlıdır, ama açıkça dokümante edilmelidir.

## Maskeler

Mask, bir veya daha fazla biti seçer:

```c
#define IZIN_OKU   (1u << 0)
#define IZIN_YAZ   (1u << 1)
#define IZIN_CALIS (1u << 2)
```

Flag set etmek:

```c
izinler |= IZIN_YAZ;
```

Flag temizlemek:

```c
izinler &= ~IZIN_YAZ;
```

Flag toggle etmek:

```c
izinler ^= IZIN_YAZ;
```

Flag kontrol etmek:

```c
if ((izinler & IZIN_YAZ) != 0)
{
    puts("yazma izni var");
}
```

## Shift İşlemleri

Unsigned integer için left shift çoğu zaman ikinin kuvvetleriyle çarpma gibi
düşünülebilir:

```c
1u << 3 // 8
```

Signed integer kullanırken dikkatli ol. Negatif signed değerleri shift etmek
başlangıçta beklendiği kadar taşınabilir değildir. Bit işlemlerinde unsigned
tipler tercih edilir.

## Sık Hatalar

- Bit mask için signed integer kullanmak.
- Mask ifadelerinde parantez unutmak.
- Logical `&&` ile bitwise `&` karıştırmak.
- Flag kontrolünü mask ile değil `izinler == IZIN_YAZ` ile yapmak.
- Bit genişliğinden büyük veya eşit miktarda shift yapmak.
- Bit-packed değerleri kendi kendini açıklıyor sanmak.

## Bu Klasördeki Dosyalar

- `permission_flags.c`: izin bitlerini set, clear, toggle ve check etmek.
- `bit_masks_and_packing.c`: küçük değerleri tek integer içine paketlemek.
- `xor_toggle_demo.c`: XOR ile toggle ve basit fark mantığı.

## Gerçek Hayatta Kullanım

Bitwise işlemler dosya izinleri, network protocol header'ları, embedded register
configuration, compression, checksum, grafik formatları ve feature flag
sistemlerinde karşına çıkar.

## Alıştırmalar

1. Permission örneğine `IZIN_SIL` flag'i ekle.
2. İstenen tüm flagler var mı kontrol eden fonksiyon yaz.
3. Gün, ay ve yılı tek unsigned integer içine paketle.
4. Bitwise işlemlerde unsigned integer neden tercih edilir açıkla.
5. 8-bit değerin binary gösterimini yazdır.

## Tekrar Soruları

1. `&` ile `&&` arasındaki fark nedir?
2. Diğer bitleri değiştirmeden tek bit nasıl temizlenir?
3. Mask için neden sıkça `1u << n` kullanılır?
4. `izinler == IZIN_YAZ` kontrolü neden çoğu zaman yanlıştır?
5. Signed shift işlemlerinde hangi riskler vardır?

