#include <stdio.h>
#include <string.h>

int main(void)
{
    int notlar[4] = {70, 85, 90, 60};
    int toplam = 0;

    for (int i = 0; i < 4; i++)
        toplam += notlar[i];

    printf("Ortalama: %.2f\n", (double)toplam / 4);

    char isim[] = "Ahmet"; // karakter dizisi (string)
    printf("Isim: %s, uzunluk: %zu\n", isim, strlen(isim));
    printf("ASCII 'A' = %d\n", 'A');

    return 0;
}
