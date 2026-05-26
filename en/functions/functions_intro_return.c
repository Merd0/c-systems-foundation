/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/functions/array_parameter_examples.c
 */

#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main(void)
{
    int value = 6;
    int result = square(value);
    printf("%d squared = %d\n", value, result);
    return 0;
}
