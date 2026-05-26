/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/loops/break_continue_rand.c
 */

#include <stdio.h>

int main(void)
{
    int i;

    // for: useful when the iteration count is known.
    printf("For loop 1..5: ");
    for (i = 1; i <= 5; i++)
        printf("%d ", i);
    printf("\n");

    // while: useful when the condition controls the loop.
    i = 1;
    printf("While loop 1..5: ");
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do-while: runs at least once.
    i = 10;
    do
    {
        printf("Do-while ran once (i=%d)\n", i);
    } while (i < 5);

    return 0;
}
