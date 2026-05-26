#include <stdio.h>

int diziTopla(const int *dizi, int boyut)
{
    if (dizi == NULL)
        return 0;

    int toplam = 0;
    for (int i = 0; i < boyut; i++)
        toplam += *(dizi + i);
    return toplam;
}

int main(void)
{
    int sayilar[] = {3, 5, 7, 9};
    printf("Toplam: %d\n", diziTopla(sayilar, 4));
    printf("NULL ile toplam: %d\n", diziTopla(NULL, 4));
    return 0;
}
