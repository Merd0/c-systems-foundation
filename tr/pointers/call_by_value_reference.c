/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/pointers/null_pointer_and_array.c
 */

#include <stdio.h>

void degeriArtirValue(int x)
{
    x++;
}

void degeriArtirReference(int *x)
{
    if (x != NULL)
        (*x)++;
}

int main(void)
{
    int sayi = 10;
    degeriArtirValue(sayi);
    printf("Call by value sonrasi: %d\n", sayi);

    degeriArtirReference(&sayi);
    printf("Call by reference sonrasi: %d\n", sayi);
    return 0;
}
