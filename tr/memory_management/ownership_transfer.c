/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/data_structures/README.md
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *metin_kopyala(const char *metin)
{
    if (metin == NULL)
    {
        return NULL;
    }

    size_t uzunluk = strlen(metin) + 1;
    char *kopya = malloc(uzunluk);
    if (kopya == NULL)
    {
        return NULL;
    }

    memcpy(kopya, metin, uzunluk);
    return kopya;
}

int main(void)
{
    char *isim = metin_kopyala("systems-c");
    if (isim == NULL)
    {
        return 1;
    }

    printf("sahip olunan kopya: %s\n", isim);

    free(isim);
    isim = NULL;

    return 0;
}

