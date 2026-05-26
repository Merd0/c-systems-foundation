/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/operators/casting_examples.c
 */

#include <stdio.h>

int main(void)
{
    int a = 12, b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (tam sayi bolmesi)\n", a / b);
    printf("a %% b = %d (kalan)\n", a % b);
    printf("(float)a / b = %.2f\n", (float)a / b);

    return 0;
}
