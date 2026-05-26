#include <stdio.h>

int main(void)
{
    double harcamalar[] = {125.5, 80.0, 430.2, 52.3, 210.0, 15.0, 99.9};
    int n = sizeof(harcamalar) / sizeof(harcamalar[0]);

    double toplam = 0, max = harcamalar[0];
    for (int i = 0; i < n; i++)
    {
        toplam += harcamalar[i];
        if (harcamalar[i] > max) max = harcamalar[i];
    }

    printf("Toplam harcama: %.2f TL\n", toplam);
    printf("Gunluk ortalama: %.2f TL\n", toplam / n);
    printf("En yuksek harcama: %.2f TL\n", max);
    return 0;
}
