#include <stdio.h>

int main(void)
{
    int number;

    // Goal: produce different output depending on a condition.
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Please enter a valid integer.\n");
        return 1;
    }

    // In an if-else chain, the first true branch runs and the rest are skipped.
    if (number > 0)
        printf("Positive\n");
    else if (number == 0)
        printf("Zero\n");
    else
        printf("Negative\n");

    // Logical AND (&&): both conditions must be true.
    if (number >= 10 && number <= 99)
        printf("Two-digit number.\n");

    return 0;
}
