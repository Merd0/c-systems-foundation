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
