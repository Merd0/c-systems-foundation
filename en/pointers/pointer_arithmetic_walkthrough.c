/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/pointers/const_pointer_parameters.c
 */

#include <stddef.h>
#include <stdio.h>

void print_values(const int *values, size_t count)
{
    if (values == NULL)
    {
        return;
    }

    const int *end = values + count;
    for (const int *current = values; current < end; current++)
    {
        printf("index %td -> %d\n", current - values, *current);
    }
}

int main(void)
{
    int scores[] = {70, 85, 92, 64};
    size_t count = sizeof(scores) / sizeof(scores[0]);

    print_values(scores, count);

    return 0;
}

