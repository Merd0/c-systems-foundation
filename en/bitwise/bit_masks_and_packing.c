/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/bitwise/xor_toggle_demo.c
 */

#include <stdio.h>

#define DAY_MASK 0x1Fu
#define MONTH_MASK 0x0Fu
#define YEAR_MASK 0x7Fu

static unsigned int pack_date(unsigned int day, unsigned int month, unsigned int year_since_2000)
{
    return ((year_since_2000 & YEAR_MASK) << 9) | ((month & MONTH_MASK) << 5) | (day & DAY_MASK);
}

static unsigned int unpack_day(unsigned int packed)
{
    return packed & DAY_MASK;
}

static unsigned int unpack_month(unsigned int packed)
{
    return (packed >> 5) & MONTH_MASK;
}

static unsigned int unpack_year(unsigned int packed)
{
    return 2000u + ((packed >> 9) & YEAR_MASK);
}

int main(void)
{
    unsigned int packed = pack_date(16, 5, 26);

    printf("packed: %u\n", packed);
    printf("date: %u-%02u-%02u\n", unpack_year(packed), unpack_month(packed), unpack_day(packed));

    return 0;
}

