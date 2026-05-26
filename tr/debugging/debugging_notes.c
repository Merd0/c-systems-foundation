/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;

    // Debugger ile breakpoint koyup adim adim degerleri izle.
    if (b == 0)
    {
        printf("Uyari: sifira bolme engellendi.\n");
        return 1;
    }

    printf("Sonuc: %d\n", a / b);
    return 0;
}
