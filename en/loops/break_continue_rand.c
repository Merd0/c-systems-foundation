/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/arrays/arrays_and_strings_basics.c
 */

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
