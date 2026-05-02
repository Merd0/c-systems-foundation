#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;

    // Put a breakpoint and inspect values step by step.
    if (b == 0)
    {
        printf("Warning: division by zero prevented.\n");
        return 1;
    }

    printf("Result: %d\n", a / b);
    return 0;
}
