/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/operators/math_library_examples.c
 */

#include <stdbool.h>
#include <stdio.h>

#define PASSING_GRADE 50

int main(void)
{
    const double tax_rate = 0.20;
    int values[5] = {10, 20, 30, 40, 50};
    int grade = 72;

    bool passed = grade >= PASSING_GRADE;

    printf("tax rate (const): %.2f\n", tax_rate);
    printf("passing grade (#define): %d\n", PASSING_GRADE);
    printf("passed? %s\n", passed ? "Yes" : "No");

    printf("int size: %zu byte\n", sizeof(int));
    printf("array total size: %zu byte\n", sizeof(values));
    printf("element count: %zu\n", sizeof(values) / sizeof(values[0]));

    return 0;
}
