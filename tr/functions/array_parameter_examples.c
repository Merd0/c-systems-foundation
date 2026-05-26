/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/functions/palindrome_solution.c
 */

#include <stdio.h>

double ortalamaHesapla(const int dizi[], int boyut)
{
    int toplam = 0;
    for (int i = 0; i < boyut; i++)
        toplam += dizi[i];
    return (double)toplam / boyut;
}

int main(void)
{
    int notlar[] = {80, 70, 95, 60, 88};
    int boyut = sizeof(notlar) / sizeof(notlar[0]);
    printf("Ortalama: %.2f\n", ortalamaHesapla(notlar, boyut));
    return 0;
}
