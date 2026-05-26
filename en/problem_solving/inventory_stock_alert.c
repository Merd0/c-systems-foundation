/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/problem_solving/student_stats_dashboard.c
 */

#include <stdbool.h>
#include <stdio.h>

#define PRODUCT_COUNT 5

typedef struct
{
    char name[20];
    int stock;
    int critical_level;
} Product;

int main(void)
{
    Product products[PRODUCT_COUNT] = {
        {"Cable", 12, 10},
        {"SSD", 4, 5},
        {"RAM", 2, 4},
        {"Mouse", 7, 6},
        {"Monitor", 1, 2},
    };

    for (int i = 0; i < PRODUCT_COUNT; i++)
    {
        bool critical = products[i].stock <= products[i].critical_level;
        printf("%s -> stock:%d | %s\n",
               products[i].name,
               products[i].stock,
               critical ? "CRITICAL" : "NORMAL");
    }

    return 0;
}
