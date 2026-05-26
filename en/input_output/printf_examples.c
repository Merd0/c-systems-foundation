/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/input_output/scanf_usage.c
 */

#include <stdio.h>

int main(void)
{
    int score = 95;
    float average = 87.4567f;
    char name[] = "Ada";

    // Goal: produce readable formatted output.
    printf("Name: %s\n", name);                     // %s -> string
    printf("Score: %d\n", score);                   // %d -> int
    printf("Average: %f\n", average);               // %f -> float/double
    printf("Average (2 decimals): %.2f\n", average);

    // Escape characters help format output.
    printf("First line\nSecond line\n");
    printf("Column1\tColumn2\n");

    // Type mismatches are bugs: do not print a float with %d.
    return 0;
}
