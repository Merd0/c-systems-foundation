#include <stdio.h>

int main(void)
{
    int notlar[5] = {78, 92, 64, 88, 73};
    int toplam = 0, enBuyuk = notlar[0], enKucuk = notlar[0];

    for (int i = 0; i < 5; i++)
    {
        toplam += notlar[i];
        if (notlar[i] > enBuyuk)
            enBuyuk = notlar[i];
        if (notlar[i] < enKucuk)
            enKucuk = notlar[i];
    }

    double ortalama = (double)toplam / 5;

    printf("Ogrenci Not Dashboard\n");
    printf("Ortalama: %.2f\n", ortalama);
    printf("En yuksek: %d\n", enBuyuk);
    printf("En dusuk: %d\n", enKucuk);

    if (ortalama >= 85)
        printf("Durum: Basari seviyesi cok iyi\n");
    else if (ortalama >= 70)
        printf("Durum: Basari seviyesi iyi\n");
    else
        printf("Durum: Gelistirme gerekli\n");

    return 0;
}
