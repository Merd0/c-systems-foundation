#include <stdio.h>

/*
 * Bad pattern:
 *
 * int *bad_address(void)
 * {
 *     int local = 42;
 *     return &local;
 * }
 *
 * The local variable stops existing when the function returns. The returned
 * pointer would be dangling.
 */

void fill_answer(int *out_value)
{
    if (out_value != NULL)
    {
        *out_value = 42;
    }
}

int main(void)
{
    int answer = 0;
    fill_answer(&answer);
    printf("answer: %d\n", answer);

    return 0;
}

