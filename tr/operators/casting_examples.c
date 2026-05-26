/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/operators/bool_const_define_sizeof.c
 */

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
