#include <stdio.h>

#define DOSYA_ADI "products_records.bin"
#define URUN_ADEDI 2

typedef struct
{
    int id;
    double fiyat;
    int stok;
} UrunKaydi;

int main(void)
{
    UrunKaydi kayitlar[URUN_ADEDI] = {
        {1, 19.99, 5},
        {2, 49.50, 8},
    };

    FILE *cikis = fopen(DOSYA_ADI, "wb");
    if (cikis == NULL)
    {
        perror(DOSYA_ADI);
        return 1;
    }

    size_t yazilan = fwrite(kayitlar, sizeof(kayitlar[0]), URUN_ADEDI, cikis);
    fclose(cikis);

    if (yazilan != URUN_ADEDI)
    {
        return 1;
    }

    UrunKaydi yuklenenler[URUN_ADEDI];
    FILE *giris = fopen(DOSYA_ADI, "rb");
    if (giris == NULL)
    {
        perror(DOSYA_ADI);
        return 1;
    }

    size_t okunan = fread(yuklenenler, sizeof(yuklenenler[0]), URUN_ADEDI, giris);
    fclose(giris);

    for (size_t i = 0; i < okunan; i++)
    {
        printf("id=%d fiyat=%.2f stok=%d\n",
               yuklenenler[i].id,
               yuklenenler[i].fiyat,
               yuklenenler[i].stok);
    }

    return 0;
}

