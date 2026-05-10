#include <math.h>
#include <stdio.h>

int main(void)
{
    double x = 9.0, y = 2.5;

    // sqrt(x): returns the square root of x. sqrt(9.0) -> 3.0
    // %.1f: print with 1 digit after the decimal point.
    // %.2f: print with 2 digits after the decimal point.
    printf("sqrt(%.1f) = %.2f\n", x, sqrt(x));

    // pow(a, b): returns a raised to power b.
    printf("pow(%.1f, %.1f) = %.2f\n", x, y, pow(x, y));

    // ceil rounds up, floor rounds down.
    printf("ceil(%.2f) = %.2f\n", y, ceil(y));
    printf("floor(%.2f) = %.2f\n", y, floor(y));

    return 0;
}
