/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/pointers/dangling_pointer_warning.c
 */

#include <stddef.h>
#include <stdio.h>

int degerleri_topla(const int *degerler, size_t adet)
{
    if (degerler == NULL)
    {
        return 0;
    }

    int toplam = 0;
    for (size_t i = 0; i < adet; i++)
    {
        toplam += degerler[i];
    }

    return toplam;
}

void rapor_yazdir(const int *degerler, size_t adet)
{
    printf("adet: %zu\n", adet);
    printf("toplam: %d\n", degerleri_topla(degerler, adet));
}

int main(void)
{
    int degerler[] = {3, 5, 8, 13};
    size_t adet = sizeof(degerler) / sizeof(degerler[0]);

    rapor_yazdir(degerler, adet);

    return 0;
}

