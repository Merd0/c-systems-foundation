/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/functions/palindrome_solution.c
 */

#include <stdio.h>

double calculate_average(const int values[], int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
        total += values[i];
    return (double)total / length;
}

int main(void)
{
    int grades[] = {80, 70, 95, 60, 88};
    int length = sizeof(grades) / sizeof(grades[0]);
    printf("Average: %.2f\n", calculate_average(grades, length));
    return 0;
}
