#include <stdio.h>

#define FILE_NAME "products_records.txt"
#define PRODUCT_COUNT 3

typedef struct
{
    char name[32];
    double price;
    int stock;
} Product;

int save_products(const Product products[], int count)
{
    FILE *fp = fopen(FILE_NAME, "w");
    if (fp == NULL)
    {
        perror(FILE_NAME);
        return 0;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%s|%.2f|%d\n", products[i].name, products[i].price, products[i].stock);
    }

    fclose(fp);
    return 1;
}

int load_products(Product products[], int max_count)
{
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL)
    {
        perror(FILE_NAME);
        return 0;
    }

    char line[128];
    int count = 0;
    while (count < max_count && fgets(line, sizeof(line), fp) != NULL)
    {
        Product product;
        if (sscanf(line, "%31[^|]|%lf|%d", product.name, &product.price, &product.stock) == 3)
        {
            products[count] = product;
            count++;
        }
    }

    fclose(fp);
    return count;
}

int main(void)
{
    Product products[PRODUCT_COUNT] = {
        {"Keyboard", 79.99, 10},
        {"Mouse", 39.50, 25},
        {"Monitor", 210.00, 4},
    };

    if (!save_products(products, PRODUCT_COUNT))
    {
        return 1;
    }

    Product loaded[PRODUCT_COUNT];
    int loaded_count = load_products(loaded, PRODUCT_COUNT);

    for (int i = 0; i < loaded_count; i++)
    {
        printf("%s %.2f %d\n", loaded[i].name, loaded[i].price, loaded[i].stock);
    }

    return 0;
}

