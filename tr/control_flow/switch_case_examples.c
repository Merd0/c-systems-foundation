/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/loops/for_while_do_examples.c
 */

#include <stdio.h>

int main(void)
{
    int secim;
    printf("1-Topla 2-Cikar 3-Carp 4-Bol sec: ");
    if (scanf("%d", &secim) != 1)
        return 1;

    switch (secim)
    {
    case 1:
        printf("Toplama secildi\n");
        break;
    case 2:
        printf("Cikarma secildi\n");
        break;
    case 3:
        printf("Carpma secildi\n");
        break;
    case 4:
        printf("Bolme secildi\n");
        break;
    default:
        printf("Gecersiz secim\n");
    }

    return 0;
}
