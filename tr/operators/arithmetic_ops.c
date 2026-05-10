#include <stdio.h>

int main(void)
{
    int a = 12, b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (tam sayi bolmesi)\n", a / b);
    printf("a %% b = %d (kalan)\n", a % b);
    printf("(float)a / b = %.2f\n", (float)a / b);

    return 0;
}
