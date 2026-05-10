#include <stdio.h>

int main(void)
{
    int sayi;

    // Amaç: Koşula göre farklı çıktılar üretmek.
    printf("Bir sayi girin: ");
    if (scanf("%d", &sayi) != 1)
    {
        printf("Lutfen gecerli bir tam sayi girin.\n");
        return 1;
    }

    // if-else zinciri: ilk doğru koşul çalışır, kalanlar atlanır.
    if (sayi > 0)
        printf("Pozitif\n");
    else if (sayi == 0)
        printf("Sifir\n");
    else
        printf("Negatif\n");

    // Mantıksal VE (&&): iki koşul da doğru olmalı.
    if (sayi >= 10 && sayi <= 99)
        printf("Iki basamakli sayi.\n");

    return 0;
}
