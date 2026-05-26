/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/memory_management/ownership_transfer.c
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

bool append_value(int **items, size_t *count, size_t *capacity, int value)
{
    if (items == NULL || count == NULL || capacity == NULL)
    {
        return false;
    }

    if (*count == *capacity)
    {
        size_t new_capacity = (*capacity == 0) ? 4 : (*capacity * 2);
        int *grown = realloc(*items, new_capacity * sizeof(**items));
        if (grown == NULL)
        {
            return false;
        }

        *items = grown;
        *capacity = new_capacity;
    }

    (*items)[*count] = value;
    (*count)++;
    return true;
}

int main(void)
{
    int *items = NULL;
    size_t count = 0;
    size_t capacity = 0;

    for (int value = 10; value <= 60; value += 10)
    {
        if (!append_value(&items, &count, &capacity, value))
        {
            free(items);
            return 1;
        }
    }

    printf("count: %zu capacity: %zu\n", count, capacity);
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", items[i]);
    }
    printf("\n");

    free(items);
    return 0;
}

