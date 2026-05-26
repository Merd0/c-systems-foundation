/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/structs/README.md
 */

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

