/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/operators/bool_const_define_sizeof.c
 */

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
