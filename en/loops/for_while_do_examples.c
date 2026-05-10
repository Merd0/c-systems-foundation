#include <stdio.h>

int main(void)
{
    int i = 1;

    // for: tekrar sayisi belliyse idealdir.
    printf("For ile 1..5: ");
    for (i = 1; i <= 5; i++)
        printf("%d ", i);
    printf("\n");

    // while: kosul dogru oldugu surece devam eder.
    i = 1;
    printf("While ile 1..5: ");
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do-while: en az 1 kez calisir.
    i = 6;
    do
    {
        printf("Do-while bir kez calisti (i=%d)\n", i);
    } while (i <= 5);

    return 0;
}
