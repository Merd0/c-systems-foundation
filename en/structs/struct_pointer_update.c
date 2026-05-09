#include <stdio.h>

typedef struct
{
    char name[20];
    int stock;
} Product;

void increaseStock(Product *p, int amount)
{
    if (p != NULL && amount > 0)
        p->stock += amount;
}

int main(void)
{
    Product pen = {"Pen", 10};
    increaseStock(&pen, 5);
    printf("%s stock: %d\n", pen.name, pen.stock);
    return 0;
}
