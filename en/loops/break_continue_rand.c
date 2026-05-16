#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
            continue;
        if (i == 8)
            break;
        printf("%d ", i);
    }

    printf("\n");
    printf("Random number: %d\n", rand() % 100);

    return 0;
}
