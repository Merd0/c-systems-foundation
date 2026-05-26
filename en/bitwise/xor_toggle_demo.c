/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/algorithms/char_frequency.c
 */

#include <stdio.h>

int main(void)
{
    unsigned int feature_enabled = 0u;

    feature_enabled ^= 1u;
    printf("after first toggle: %u\n", feature_enabled);

    feature_enabled ^= 1u;
    printf("after second toggle: %u\n", feature_enabled);

    unsigned int a = 10u; /* binary: 1010 */
    unsigned int b = 12u; /* binary: 1100 */
    printf("a ^ b = %u\n", a ^ b);

    return 0;
}
