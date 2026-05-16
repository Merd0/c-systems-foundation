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
