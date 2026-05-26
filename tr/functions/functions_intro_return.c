/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/functions/array_parameter_examples.c
 */

#include <stdio.h>

int kareAl(int sayi)
{
    return sayi * sayi;
}

int main(void)
{
    int deger = 6;
    int sonuc = kareAl(deger);
    printf("%d sayisinin karesi = %d\n", deger, sonuc);
    return 0;
}
