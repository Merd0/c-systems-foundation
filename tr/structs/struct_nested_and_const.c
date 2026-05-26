/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/structs/struct_padding_alignment.c
 */

#include <stdio.h>

typedef struct
{
    char sehir[32];
    char ulke[32];
} Adres;

typedef struct
{
    int id;
    char ad[32];
    Adres adres;
} Musteri;

void musteri_yazdir(const Musteri *musteri)
{
    if (musteri == NULL)
    {
        return;
    }

    printf("Musteri #%d: %s\n", musteri->id, musteri->ad);
    printf("Konum: %s, %s\n", musteri->adres.sehir, musteri->adres.ulke);
}

int main(void)
{
    Musteri musteri = {
        .id = 7,
        .ad = "Ada",
        .adres = {
            .sehir = "Istanbul",
            .ulke = "Turkiye",
        },
    };

    musteri_yazdir(&musteri);

    return 0;
}

