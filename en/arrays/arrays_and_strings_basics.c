/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/arrays/multidimensional_arrays.c
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int grades[4] = {70, 85, 90, 60};
    int total = 0;

    for (int i = 0; i < 4; i++)
        total += grades[i];

    printf("Average: %.2f\n", (double)total / 4);

    char name[] = "Ada";
    printf("Name: %s, length: %zu\n", name, strlen(name));
    printf("ASCII 'A' = %d\n", 'A');

    return 0;
}
