#include <stdio.h>

int main(void)
{
    int a = 12, b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (integer division)\n", a / b);
    printf("a %% b = %d (remainder)\n", a % b);
    printf("(float)a / b = %.2f\n", (float)a / b);

    return 0;
}
