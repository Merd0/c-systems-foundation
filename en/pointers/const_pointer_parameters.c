#include <stddef.h>
#include <stdio.h>

int sum_values(const int *values, size_t count)
{
    if (values == NULL)
    {
        return 0;
    }

    int total = 0;
    for (size_t i = 0; i < count; i++)
    {
        total += values[i];
    }

    return total;
}

void print_report(const int *values, size_t count)
{
    printf("count: %zu\n", count);
    printf("sum: %d\n", sum_values(values, count));
}

int main(void)
{
    int values[] = {3, 5, 8, 13};
    size_t count = sizeof(values) / sizeof(values[0]);

    print_report(values, count);

    return 0;
}

