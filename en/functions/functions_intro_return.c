#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main(void)
{
    int value = 6;
    int result = square(value);
    printf("%d squared = %d\n", value, result);
    return 0;
}
