#include <stdio.h>

int main(void)
{
    int total = 7, count = 2;

    printf("Without cast: %d\n", total / count);
    printf("With cast: %.2f\n", (double)total / count);

    double price = 19.99;
    int roundedDown = (int)price;
    printf("price: %.2f, cast to int: %d\n", price, roundedDown);

    return 0;
}
