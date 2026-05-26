#include <stdio.h>

#define DOSYA_ADI "products_records.txt"
#define URUN_ADEDI 3

typedef struct
{
    char ad[32];
    double fiyat;
    int stok;
} Urun;

int urunleri_kaydet(const Urun urunler[], int adet)
{
    FILE *fp = fopen(DOSYA_ADI, "w");
    if (fp == NULL)
    {
        perror(DOSYA_ADI);
        return 0;
    }

    for (int i = 0; i < adet; i++)
    {
        fprintf(fp, "%s|%.2f|%d\n", urunler[i].ad, urunler[i].fiyat, urunler[i].stok);
    }

    fclose(fp);
    return 1;
}

int urunleri_yukle(Urun urunler[], int maksimum_adet)
{
    FILE *fp = fopen(DOSYA_ADI, "r");
    if (fp == NULL)
    {
        perror(DOSYA_ADI);
        return 0;
    }

    char satir[128];
    int adet = 0;
    while (adet < maksimum_adet && fgets(satir, sizeof(satir), fp) != NULL)
    {
        Urun urun;
        if (sscanf(satir, "%31[^|]|%lf|%d", urun.ad, &urun.fiyat, &urun.stok) == 3)
        {
            urunler[adet] = urun;
            adet++;
        }
    }

    fclose(fp);
    return adet;
}

int main(void)
{
    Urun urunler[URUN_ADEDI] = {
        {"Klavye", 79.99, 10},
        {"Mouse", 39.50, 25},
        {"Monitor", 210.00, 4},
    };

    if (!urunleri_kaydet(urunler, URUN_ADEDI))
    {
        return 1;
    }

    Urun yuklenenler[URUN_ADEDI];
    int yuklenen_adet = urunleri_yukle(yuklenenler, URUN_ADEDI);

    for (int i = 0; i < yuklenen_adet; i++)
    {
        printf("%s %.2f %d\n", yuklenenler[i].ad, yuklenenler[i].fiyat, yuklenenler[i].stok);
    }

    return 0;
}

