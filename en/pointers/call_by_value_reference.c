#include <stdio.h>

void incrementValue(int x)
{
    x++;
}

void incrementReference(int *x)
{
    if (x != NULL)
        (*x)++;
}

int main(void)
{
    int number = 10;
    incrementValue(number);
    printf("After call by value: %d\n", number);

    incrementReference(&number);
    printf("After call by reference: %d\n", number);
    return 0;
}
