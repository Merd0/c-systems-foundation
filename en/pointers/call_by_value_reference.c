#include <stdio.h>

void increment_by_value(int x)
{
    x++;
    (void)x; /* The modified local copy is intentionally discarded. */
}

void increment_by_pointer(int *x)
{
    if (x != NULL)
        (*x)++;
}

int main(void)
{
    int number = 10;
    increment_by_value(number);
    printf("After call by value: %d\n", number);

    increment_by_pointer(&number);
    printf("After pointer update: %d\n", number);
    return 0;
}
