/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/operators/math_library_examples.c
 */

#include <stdbool.h>
#include <stdio.h>

#define GECME_NOTU 50

int main(void)
{
    const float pi = 3.14f; // const: calisma aninda degismemeli
    int dizi[5] = {10, 20, 30, 40, 50};
    int notu = 67;

    bool gectiMi = notu >= GECME_NOTU;

    printf("pi = %.2f\n", pi);
    printf("Gecme notu (#define) = %d\n", GECME_NOTU);
    printf("Gecti mi? %s\n", gectiMi ? "Evet" : "Hayir");

    printf("int boyutu: %zu byte\n", sizeof(int));
    printf("dizi toplam boyut: %zu byte\n", sizeof(dizi));
    printf("eleman sayisi: %zu\n", sizeof(dizi) / sizeof(dizi[0]));

    return 0;
}
