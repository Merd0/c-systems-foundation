/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/unions/README.md
 */

#include <stddef.h>
#include <stdio.h>

typedef struct
{
    char tag;
    int count;
    double price;
} ProductLayout;

typedef struct
{
    double price;
    int count;
    char tag;
} CompactProductLayout;

int main(void)
{
    printf("ProductLayout size: %zu\n", sizeof(ProductLayout));
    printf("  tag offset:   %zu\n", offsetof(ProductLayout, tag));
    printf("  count offset: %zu\n", offsetof(ProductLayout, count));
    printf("  price offset: %zu\n", offsetof(ProductLayout, price));

    printf("CompactProductLayout size: %zu\n", sizeof(CompactProductLayout));
    printf("  price offset: %zu\n", offsetof(CompactProductLayout, price));
    printf("  count offset: %zu\n", offsetof(CompactProductLayout, count));
    printf("  tag offset:   %zu\n", offsetof(CompactProductLayout, tag));

    return 0;
}

