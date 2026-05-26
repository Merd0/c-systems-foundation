/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/pointers/null_pointer_and_array.c
 */

#include <stdio.h>

void increment_by_value(int x)
{
    x++;
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
