#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_KITAP 100
#define DOSYA "kutuphane_kayit.txt"

typedef struct {
    int id;
    char ad[50];
    char yazar[50];
    bool oduncte;
} Kitap;

void kaydet(const Kitap kitaplar[], int adet)
{
    FILE *fp = fopen(DOSYA, "w");
    if (!fp) return;
    for (int i = 0; i < adet; i++)
        fprintf(fp, "%d|%s|%s|%d\n", kitaplar[i].id, kitaplar[i].ad, kitaplar[i].yazar, kitaplar[i].oduncte ? 1 : 0);
    fclose(fp);
}

void yukle(Kitap kitaplar[], int *adet)
{
    FILE *fp = fopen(DOSYA, "r");
    if (!fp) return;

    while (*adet < MAX_KITAP)
    {
        Kitap k;
        int borrowed;
        if (fscanf(fp, "%d|%49[^|]|%49[^|]|%d\n", &k.id, k.ad, k.yazar, &borrowed) != 4) break;
        k.oduncte = borrowed == 1;
        kitaplar[*adet] = k;
        (*adet)++;
    }
    fclose(fp);
}

int main(void)
{
    Kitap kitaplar[MAX_KITAP];
    int adet = 0;

    yukle(kitaplar, &adet);

    if (adet < MAX_KITAP)
    {
        kitaplar[adet].id = adet + 1;
        strcpy(kitaplar[adet].ad, "C Programlama");
        strcpy(kitaplar[adet].yazar, "Anonim");
        kitaplar[adet].oduncte = false;
        adet++;
    }

    kaydet(kitaplar, adet);
    printf("Kayit adedi: %d\n", adet);
    return 0;
}
