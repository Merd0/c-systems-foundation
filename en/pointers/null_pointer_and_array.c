/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/pointers/pointer_arithmetic_walkthrough.c
 */

#include <stdio.h>

int sum_array(const int *values, int length)
{
    if (values == NULL)
        return 0;

    int total = 0;
    for (int i = 0; i < length; i++)
        total += *(values + i);
    return total;
}

int main(void)
{
    int numbers[] = {3, 5, 7, 9};
    printf("Sum: %d\n", sum_array(numbers, 4));
    printf("Sum with NULL: %d\n", sum_array(NULL, 4));
    return 0;
}
