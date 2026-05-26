#include <math.h>
#include <stdio.h>

int main(void)
{
    double x = 16.0;
    double y = 2.5;

    printf("sqrt(%.1f) = %.2f\n", x, sqrt(x));
    printf("pow(%.1f, %.1f) = %.2f\n", x, y, pow(x, y));
    printf("ceil(%.1f) = %.1f\n", y, ceil(y));
    printf("floor(%.1f) = %.1f\n", y, floor(y));

    return 0;
}
