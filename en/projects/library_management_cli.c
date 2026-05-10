#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_KITAP 100

typedef struct {
    int id;
    char ad[50];
    char yazar[50];
    bool oduncVerildi;
} Kitap;

void kitapEkle(Kitap kitaplar[], int *adet)
{
    if (*adet >= MAX_KITAP) return;
    Kitap *k = &kitaplar[*adet];
    k->id = *adet + 1;
    printf("Kitap adi: "); scanf(" %49[^\n]", k->ad);
    printf("Yazar: "); scanf(" %49[^\n]", k->yazar);
    k->oduncVerildi = false;
    (*adet)++;
}

void kitapListele(const Kitap kitaplar[], int adet)
{
    for (int i = 0; i < adet; i++)
        printf("[%d] %s - %s (%s)\n", kitaplar[i].id, kitaplar[i].ad, kitaplar[i].yazar,
               kitaplar[i].oduncVerildi ? "Oduncte" : "Rafta");
}

int kitapBul(const Kitap kitaplar[], int adet, const char *aranan)
{
    for (int i = 0; i < adet; i++)
        if (strstr(kitaplar[i].ad, aranan) != NULL)
            return i;
    return -1;
}

int main(void)
{
    Kitap kitaplar[MAX_KITAP];
    int adet = 0, secim;
    char aranan[50];

    while (1)
    {
        printf("\n1-Ekle 2-Listele 3-Ara 4-Odunc Al 5-Iade 0-Cikis\nSecim: ");
        if (scanf("%d", &secim) != 1) return 1;

        if (secim == 0) break;
        if (secim == 1) kitapEkle(kitaplar, &adet);
        else if (secim == 2) kitapListele(kitaplar, adet);
        else if (secim == 3)
        {
            printf("Aranacak ad: "); scanf(" %49[^\n]", aranan);
            int idx = kitapBul(kitaplar, adet, aranan);
            printf(idx >= 0 ? "Bulundu: %s\n" : "Bulunamadi\n", idx >= 0 ? kitaplar[idx].ad : "");
        }
        else if (secim == 4)
        {
            int id; printf("Odunc alinacak id: "); scanf("%d", &id);
            if (id > 0 && id <= adet) kitaplar[id - 1].oduncVerildi = true;
        }
        else if (secim == 5)
        {
            int id; printf("Iade id: "); scanf("%d", &id);
            if (id > 0 && id <= adet) kitaplar[id - 1].oduncVerildi = false;
        }
    }
    return 0;
}
