#include <stdio.h>

int main(void)
{
    double expenses[] = {120.50, 89.90, 45.00, 230.25, 64.75};
    int count = sizeof(expenses) / sizeof(expenses[0]);
    double total = 0.0;
    double max = expenses[0];

    for (int i = 0; i < count; i++)
    {
        total += expenses[i];
        if (expenses[i] > max)
            max = expenses[i];
    }

    printf("Total expense: %.2f\n", total);
    printf("Daily average: %.2f\n", total / count);
    printf("Highest expense: %.2f\n", max);
    return 0;
}
