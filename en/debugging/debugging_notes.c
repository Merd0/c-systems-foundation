/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;

    // Put a breakpoint here and inspect values step by step.
    if (b == 0)
    {
        printf("Warning: division by zero prevented.\n");
        return 1;
    }

    printf("Result: %d\n", a / b);
    return 0;
}
