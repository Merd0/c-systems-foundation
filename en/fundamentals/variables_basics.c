/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/input_output/printf_examples.c
 */

#include <stdio.h>

int main(void)
{
    // Variables store data under a meaningful name.
    int age = 22;
    float temperature = 24.5f;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature);
    printf("Grade: %c\n", grade);

    // Use const for values that should not change.
    const int birth_year = 2004;
    printf("Birth year: %d\n", birth_year);

    return 0;
}
