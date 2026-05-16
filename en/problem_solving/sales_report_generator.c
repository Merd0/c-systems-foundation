#include <stdio.h>

#define ITEM_COUNT 5

typedef struct
{
    char name[20];
    double unit_price;
    int quantity;
} SaleItem;

double calculate_revenue(const SaleItem items[], int length)
{
    double total = 0.0;
    for (int i = 0; i < length; i++)
        total += items[i].unit_price * items[i].quantity;
    return total;
}

int main(void)
{
    SaleItem items[ITEM_COUNT] = {
        {"Keyboard", 850.0, 3},
        {"Mouse", 450.0, 5},
        {"Headset", 1200.0, 2},
        {"Monitor", 5200.0, 1},
        {"Webcam", 900.0, 4},
    };

    printf("=== Sales Report ===\n");
    for (int i = 0; i < ITEM_COUNT; i++)
    {
        printf("%-10s | qty:%d | unit:%.2f | total:%.2f\n",
               items[i].name,
               items[i].quantity,
               items[i].unit_price,
               items[i].unit_price * items[i].quantity);
    }

    printf("Total revenue: %.2f\n", calculate_revenue(items, ITEM_COUNT));
    return 0;
}
