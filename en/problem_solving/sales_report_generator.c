#include <stdio.h>

#define PRODUCT_COUNT 5

typedef struct
{
    char name[20];
    double price;
    int quantity;
} SaleItem;

double calculateRevenue(const SaleItem items[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
        total += items[i].price * items[i].quantity;
    return total;
}

int main(void)
{
    SaleItem items[PRODUCT_COUNT] = {
        {"Keyboard", 850.0, 3},
        {"Mouse", 450.0, 5},
        {"Headset", 1200.0, 2},
        {"Monitor", 5200.0, 1},
        {"Webcam", 900.0, 4}};

    printf("=== Sales Report ===\n");
    for (int i = 0; i < PRODUCT_COUNT; i++)
        printf("%-10s | qty:%d | unit:%.2f | total:%.2f\n",
               items[i].name,
               items[i].quantity,
               items[i].price,
               items[i].price * items[i].quantity);

    printf("Total Revenue: %.2f TL\n", calculateRevenue(items, PRODUCT_COUNT));
    return 0;
}
