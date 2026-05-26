/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/structs/struct_designated_initializers.c
 */

#include <stdio.h>

typedef struct
{
    char name[20];
    int stock;
} Product;

void increase_stock(Product *product, int amount)
{
    if (product != NULL && amount > 0)
    {
        product->stock += amount;
    }
}

int main(void)
{
    Product pencil = {"Pencil", 10};
    increase_stock(&pencil, 5);
    printf("%s stock: %d\n", pencil.name, pencil.stock);
    return 0;
}
