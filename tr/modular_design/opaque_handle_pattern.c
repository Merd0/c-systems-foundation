/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/file_io/README.md
 */

#include <stdio.h>
#include <stdlib.h>

/* Public API bölümü: normalde .h dosyasında olur. */
typedef struct Counter Counter;

static Counter *counter_create(int initial_value);
static void counter_destroy(Counter *counter);
static void counter_increment(Counter *counter);
static int counter_value(const Counter *counter);

/* Private implementation bölümü: normalde .c dosyasında olur. */
struct Counter {
    int value;
};

static Counter *counter_create(int initial_value) {
    Counter *counter = malloc(sizeof(*counter));
    if (counter == NULL) {
        return NULL;
    }

    counter->value = initial_value;
    return counter;
}

static void counter_destroy(Counter *counter) {
    free(counter);
}

static void counter_increment(Counter *counter) {
    if (counter != NULL) {
        ++counter->value;
    }
}

static int counter_value(const Counter *counter) {
    return counter == NULL ? 0 : counter->value;
}

int main(void) {
    Counter *counter = counter_create(10);
    if (counter == NULL) {
        return 1;
    }

    counter_increment(counter);
    printf("counter: %d\n", counter_value(counter));

    counter_destroy(counter);
    return 0;
}
