/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/preprocessor/README.md
 */

#include <stdio.h>

#define FILE_NAME "products_records.bin"
#define PRODUCT_COUNT 2

typedef struct
{
    int id;
    double price;
    int stock;
} ProductRecord;

int main(void)
{
    ProductRecord records[PRODUCT_COUNT] = {
        {1, 19.99, 5},
        {2, 49.50, 8},
    };

    FILE *out = fopen(FILE_NAME, "wb");
    if (out == NULL)
    {
        perror(FILE_NAME);
        return 1;
    }

    size_t written = fwrite(records, sizeof(records[0]), PRODUCT_COUNT, out);
    fclose(out);

    if (written != PRODUCT_COUNT)
    {
        return 1;
    }

    ProductRecord loaded[PRODUCT_COUNT];
    FILE *in = fopen(FILE_NAME, "rb");
    if (in == NULL)
    {
        perror(FILE_NAME);
        return 1;
    }

    size_t read_count = fread(loaded, sizeof(loaded[0]), PRODUCT_COUNT, in);
    fclose(in);

    for (size_t i = 0; i < read_count; i++)
    {
        printf("id=%d price=%.2f stock=%d\n", loaded[i].id, loaded[i].price, loaded[i].stock);
    }

    return 0;
}

