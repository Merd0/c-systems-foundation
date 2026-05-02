#include <stdio.h>

int main(void)
{
    int number;

    // Goal: produce different outputs based on conditions.
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Please enter a valid integer.\n");
        return 1;
    }

    // if-else chain: first true condition runs; others are skipped.
    if (number > 0)
        printf("Positive\n");
    else if (number == 0)
        printf("Zero\n");
    else
        printf("Negative\n");

    // Logical AND (&&): both sides must be true.
    if (number >= 10 && number <= 99)
        printf("Two-digit number.\n");

    return 0;
}
