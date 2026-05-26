/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/memory_management/ownership_transfer.c
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

bool deger_ekle(int **elemanlar, size_t *adet, size_t *kapasite, int deger)
{
    if (elemanlar == NULL || adet == NULL || kapasite == NULL)
    {
        return false;
    }

    if (*adet == *kapasite)
    {
        size_t yeni_kapasite = (*kapasite == 0) ? 4 : (*kapasite * 2);
        int *buyuyen = realloc(*elemanlar, yeni_kapasite * sizeof(**elemanlar));
        if (buyuyen == NULL)
        {
            return false;
        }

        *elemanlar = buyuyen;
        *kapasite = yeni_kapasite;
    }

    (*elemanlar)[*adet] = deger;
    (*adet)++;
    return true;
}

int main(void)
{
    int *elemanlar = NULL;
    size_t adet = 0;
    size_t kapasite = 0;

    for (int deger = 10; deger <= 60; deger += 10)
    {
        if (!deger_ekle(&elemanlar, &adet, &kapasite, deger))
        {
            free(elemanlar);
            return 1;
        }
    }

    printf("adet: %zu kapasite: %zu\n", adet, kapasite);
    for (size_t i = 0; i < adet; i++)
    {
        printf("%d ", elemanlar[i]);
    }
    printf("\n");

    free(elemanlar);
    return 0;
}

