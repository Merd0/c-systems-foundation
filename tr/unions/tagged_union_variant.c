/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/unions/protocol_message_union.c
 */

#include <stdio.h>

typedef enum
{
    DEGER_INT,
    DEGER_DOUBLE,
    DEGER_METIN
} DegerTipi;

typedef struct
{
    DegerTipi tip;
    union
    {
        int int_olarak;
        double double_olarak;
        char metin_olarak[32];
    } veri;
} Deger;

void deger_yazdir(const Deger *deger)
{
    if (deger == NULL)
    {
        return;
    }

    switch (deger->tip)
    {
    case DEGER_INT:
        printf("int: %d\n", deger->veri.int_olarak);
        break;
    case DEGER_DOUBLE:
        printf("double: %.2f\n", deger->veri.double_olarak);
        break;
    case DEGER_METIN:
        printf("metin: %s\n", deger->veri.metin_olarak);
        break;
    }
}

int main(void)
{
    Deger degerler[] = {
        {.tip = DEGER_INT, .veri.int_olarak = 42},
        {.tip = DEGER_DOUBLE, .veri.double_olarak = 9.75},
        {.tip = DEGER_METIN, .veri.metin_olarak = "merhaba"},
    };

    for (size_t i = 0; i < sizeof(degerler) / sizeof(degerler[0]); i++)
    {
        deger_yazdir(&degerler[i]);
    }

    return 0;
}

