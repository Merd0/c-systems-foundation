#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main(void)
{
    int value = 6;
    int result = square(value);
    printf("square(%d) = %d\n", value, result);
    return 0;
}
