/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/strings_parsing/README.md
 */

#include <limits.h>
#include <stdio.h>

typedef enum {
    PARSE_OK,
    PARSE_EMPTY,
    PARSE_INVALID_CHARACTER,
    PARSE_OVERFLOW
} ParseStatus;

static const char *parse_status_text(ParseStatus status) {
    switch (status) {
    case PARSE_OK:
        return "ok";
    case PARSE_EMPTY:
        return "boş input";
    case PARSE_INVALID_CHARACTER:
        return "geçersiz karakter";
    case PARSE_OVERFLOW:
        return "overflow";
    }

    return "bilinmeyen";
}

static ParseStatus parse_positive_int(const char *text, int *out_value) {
    if (text == NULL || text[0] == '\0') {
        return PARSE_EMPTY;
    }

    int value = 0;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        if (text[i] < '0' || text[i] > '9') {
            return PARSE_INVALID_CHARACTER;
        }

        int digit = text[i] - '0';
        if (value > (INT_MAX - digit) / 10) {
            return PARSE_OVERFLOW;
        }

        value = value * 10 + digit;
    }

    *out_value = value;
    return PARSE_OK;
}

int main(void) {
    const char *samples[] = {"42", "", "12x", "999999999999999999"};

    for (size_t i = 0; i < sizeof(samples) / sizeof(samples[0]); ++i) {
        int value = 0;
        ParseStatus status = parse_positive_int(samples[i], &value);

        if (status == PARSE_OK) {
            printf("%s -> %d\n", samples[i], value);
        } else {
            printf("%s -> %s\n", samples[i], parse_status_text(status));
        }
    }

    return 0;
}
