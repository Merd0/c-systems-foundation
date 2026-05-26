#include <stdio.h>

typedef enum
{
    VALUE_INT,
    VALUE_DOUBLE,
    VALUE_TEXT
} ValueType;

typedef struct
{
    ValueType type;
    union
    {
        int as_int;
        double as_double;
        char as_text[32];
    } data;
} Value;

void print_value(const Value *value)
{
    if (value == NULL)
    {
        return;
    }

    switch (value->type)
    {
    case VALUE_INT:
        printf("int: %d\n", value->data.as_int);
        break;
    case VALUE_DOUBLE:
        printf("double: %.2f\n", value->data.as_double);
        break;
    case VALUE_TEXT:
        printf("text: %s\n", value->data.as_text);
        break;
    }
}

int main(void)
{
    Value values[] = {
        {.type = VALUE_INT, .data.as_int = 42},
        {.type = VALUE_DOUBLE, .data.as_double = 9.75},
        {.type = VALUE_TEXT, .data.as_text = "hello"},
    };

    for (size_t i = 0; i < sizeof(values) / sizeof(values[0]); i++)
    {
        print_value(&values[i]);
    }

    return 0;
}

