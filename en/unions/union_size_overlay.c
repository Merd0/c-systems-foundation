#include <stdio.h>

typedef union
{
    int as_int;
    double as_double;
    char as_text[16];
} Value;

int main(void)
{
    printf("sizeof(int): %zu\n", sizeof(int));
    printf("sizeof(double): %zu\n", sizeof(double));
    printf("sizeof(char[16]): %zu\n", sizeof(char[16]));
    printf("sizeof(Value): %zu\n", sizeof(Value));

    Value value;
    value.as_int = 42;
    printf("active as_int: %d\n", value.as_int);

    value.as_double = 3.14;
    printf("active as_double: %.2f\n", value.as_double);

    return 0;
}

