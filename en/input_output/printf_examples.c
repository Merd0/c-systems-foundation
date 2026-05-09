#include <stdio.h>

int main(void)
{
    int score = 95;
    float average = 87.4567f;
    char name[] = "Ayse";

    // Goal: produce readable, formatted output.
    printf("Name: %s\n", name);                    // %s -> text
    printf("Score: %d\n", score);                  // %d -> int
    printf("Average: %f\n", average);              // %f -> float/double
    printf("Average (2 decimals): %.2f\n", average); // precision formatting

    // Escape characters help layout output.
    printf("First line\nSecond line\n");
    printf("Column1\tColumn2\n");

    // Type mismatch causes bugs: do not print float with %d.
    return 0;
}
