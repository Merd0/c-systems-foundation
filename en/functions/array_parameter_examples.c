#include <stdio.h>

double calculateAverage(const int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (double)sum / size;
}

int main(void)
{
    int grades[] = {80, 70, 95, 60, 88};
    int size = sizeof(grades) / sizeof(grades[0]);
    printf("Average: %.2f\n", calculateAverage(grades, size));
    return 0;
}
