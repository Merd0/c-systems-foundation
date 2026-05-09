#include <stdio.h>

int main(void)
{
    int i = 1;

    // for: best when iteration count is known.
    printf("For 1..5: ");
    for (i = 1; i <= 5; i++)
        printf("%d ", i);
    printf("\n");

    // while: runs while condition is true.
    i = 1;
    printf("While 1..5: ");
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do-while: always runs at least once.
    i = 6;
    do
    {
        printf("Do-while ran once (i=%d)\n", i);
    } while (i <= 5);

    return 0;
}
