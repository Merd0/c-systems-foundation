#include <stdio.h>

int main(void)
{
    int total = 7;
    int count = 2;

    printf("Without cast: %d\n", total / count);
    printf("With cast: %.2f\n", (double)total / count);

    double price = 19.99;
    int truncated_price = (int)price;
    printf("price: %.2f, converted to int: %d\n", price, truncated_price);

    return 0;
}
