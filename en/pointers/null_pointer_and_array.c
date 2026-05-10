#include <stdio.h>

int sumArray(const int *arr, int size)
{
    if (arr == NULL)
        return 0;

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);
    return sum;
}

int main(void)
{
    int nums[] = {3, 5, 7, 9};
    printf("Sum: %d\n", sumArray(nums, 4));
    printf("Sum with NULL: %d\n", sumArray(NULL, 4));
    return 0;
}
