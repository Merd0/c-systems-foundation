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
