#include <stdio.h>

int main(void)
{
    int toplam = 7, adet = 2;

    printf("Cast yok: %d\n", toplam / adet);
    printf("Cast var: %.2f\n", (double)toplam / adet);

    double fiyat = 19.99;
    int asagiYuvarlanan = (int)fiyat;
    printf("fiyat: %.2f, int'e donusum: %d\n", fiyat, asagiYuvarlanan);

    return 0;
}
