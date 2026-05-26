#include <stdio.h>

typedef struct
{
    int id;
    char name[32];
    double price;
    int stock;
} Product;

void print_product(const Product *product)
{
    if (product == NULL)
    {
        return;
    }

    printf("[%d] %-12s | price: %.2f | stock: %d\n",
           product->id,
           product->name,
           product->price,
           product->stock);
}

int main(void)
{
    Product keyboard = {
        .id = 101,
        .name = "Keyboard",
        .price = 79.99,
        .stock = 12,
    };

    Product mouse = {
        .id = 102,
        .name = "Mouse",
        .price = 39.50,
        .stock = 25,
    };

    print_product(&keyboard);
    print_product(&mouse);

    return 0;
}

