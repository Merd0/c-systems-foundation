/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/error_handling/README.md
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    int value;
} Counter;

typedef void (*CommandHandler)(Counter *counter);

typedef struct {
    const char *name;
    CommandHandler handler;
} Command;

static void increment(Counter *counter) {
    ++counter->value;
}

static void decrement(Counter *counter) {
    --counter->value;
}

static void reset(Counter *counter) {
    counter->value = 0;
}

static int run_command(const Command *commands, size_t count, const char *name, Counter *counter) {
    for (size_t i = 0; i < count; ++i) {
        if (strcmp(commands[i].name, name) == 0) {
            if (commands[i].handler == NULL) {
                return 0;
            }

            commands[i].handler(counter);
            return 1;
        }
    }

    return 0;
}

int main(void) {
    const Command commands[] = {
        {"inc", increment},
        {"dec", decrement},
        {"reset", reset},
    };

    Counter counter = {0};
    run_command(commands, sizeof(commands) / sizeof(commands[0]), "inc", &counter);
    run_command(commands, sizeof(commands) / sizeof(commands[0]), "inc", &counter);
    run_command(commands, sizeof(commands) / sizeof(commands[0]), "dec", &counter);

    printf("counter: %d\n", counter.value);
    return 0;
}
