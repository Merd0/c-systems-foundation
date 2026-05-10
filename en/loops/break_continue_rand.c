#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

    // continue: skips only current iteration.
    // break: exits the loop completely.
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
            continue;
        if (i == 8)
            break;
        printf("i=%d\n", i);
    }

    // rand() % 100 -> number between 0 and 99.
    printf("Random number: %d\n", rand() % 100);
    return 0;
}
