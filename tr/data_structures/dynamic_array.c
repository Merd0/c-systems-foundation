/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/data_structures/singly_linked_list.c
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *items;
    size_t size;
    size_t capacity;
} IntVector;

static int vector_reserve(IntVector *vector, size_t new_capacity) {
    if (new_capacity <= vector->capacity) {
        return 1;
    }

    int *new_items = realloc(vector->items, new_capacity * sizeof(*new_items));
    if (new_items == NULL) {
        return 0;
    }

    vector->items = new_items;
    vector->capacity = new_capacity;
    return 1;
}

static int vector_push(IntVector *vector, int value) {
    if (vector->size == vector->capacity) {
        size_t new_capacity = vector->capacity == 0 ? 4 : vector->capacity * 2;
        if (!vector_reserve(vector, new_capacity)) {
            return 0;
        }
    }

    vector->items[vector->size] = value;
    ++vector->size;
    return 1;
}

static void vector_destroy(IntVector *vector) {
    free(vector->items);
    vector->items = NULL;
    vector->size = 0;
    vector->capacity = 0;
}

int main(void) {
    IntVector numbers = {0};

    for (int i = 1; i <= 10; ++i) {
        if (!vector_push(&numbers, i * 10)) {
            vector_destroy(&numbers);
            return 1;
        }
    }

    for (size_t i = 0; i < numbers.size; ++i) {
        printf("[%zu] = %d\n", i, numbers.items[i]);
    }

    vector_destroy(&numbers);
    return 0;
}
