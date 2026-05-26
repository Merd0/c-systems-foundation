/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/pointers/const_pointer_parameters.c
 */

#include <stddef.h>
#include <stdio.h>

void degerleri_yazdir(const int *degerler, size_t adet)
{
    if (degerler == NULL)
    {
        return;
    }

    const int *son = degerler + adet;
    for (const int *gecerli = degerler; gecerli < son; gecerli++)
    {
        printf("index %td -> %d\n", gecerli - degerler, *gecerli);
    }
}

int main(void)
{
    int notlar[] = {70, 85, 92, 64};
    size_t adet = sizeof(notlar) / sizeof(notlar[0]);

    degerleri_yazdir(notlar, adet);

    return 0;
}

