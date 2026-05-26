#include <stdio.h>

#define URUN_SAYISI 5

typedef struct
{
    char ad[20];
    double fiyat;
    int adet;
} SatisKalemi;

double toplamCiroHesapla(const SatisKalemi kalemler[], int boyut)
{
    double toplam = 0;
    for (int i = 0; i < boyut; i++)
        toplam += kalemler[i].fiyat * kalemler[i].adet;
    return toplam;
}

int main(void)
{
    SatisKalemi kalemler[URUN_SAYISI] = {
        {"Klavye", 850.0, 3},
        {"Mouse", 450.0, 5},
        {"Kulaklik", 1200.0, 2},
        {"Monitor", 5200.0, 1},
        {"Webcam", 900.0, 4}};

    printf("=== Satis Raporu ===\n");
    for (int i = 0; i < URUN_SAYISI; i++)
        printf("%-10s | adet:%d | birim:%.2f | toplam:%.2f\n",
               kalemler[i].ad,
               kalemler[i].adet,
               kalemler[i].fiyat,
               kalemler[i].fiyat * kalemler[i].adet);

    printf("Genel Ciro: %.2f TL\n", toplamCiroHesapla(kalemler, URUN_SAYISI));
    return 0;
}
