/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/arrays/arrays_and_strings_basics.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

    // continue: sadece o turu atlar.
    // break: donguyu tamamen sonlandirir.
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
            continue;
        if (i == 8)
            break;
        printf("i=%d\n", i);
    }

    // rand() % 100 -> 0-99 arasi sayi.
    printf("Rastgele sayi: %d\n", rand() % 100);
    return 0;
}
