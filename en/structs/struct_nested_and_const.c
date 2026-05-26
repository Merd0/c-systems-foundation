/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/structs/struct_padding_alignment.c
 */

#include <stdio.h>

typedef struct
{
    char city[32];
    char country[32];
} Address;

typedef struct
{
    int id;
    char name[32];
    Address address;
} Customer;

void print_customer(const Customer *customer)
{
    if (customer == NULL)
    {
        return;
    }

    printf("Customer #%d: %s\n", customer->id, customer->name);
    printf("Location: %s, %s\n", customer->address.city, customer->address.country);
}

int main(void)
{
    Customer customer = {
        .id = 7,
        .name = "Ada",
        .address = {
            .city = "Istanbul",
            .country = "Turkey",
        },
    };

    print_customer(&customer);

    return 0;
}

