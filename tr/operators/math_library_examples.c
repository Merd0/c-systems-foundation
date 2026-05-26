#include <math.h>
#include <stdio.h>

int main(void)
{
    double x = 9.0, y = 2.5;

    // sqrt(x): x sayisinin karekokunu alir. sqrt(9.0) -> 3.0
    // %.1f: sayiyi virgülden sonra 1 basamakla yazdirir.
    // %.2f: sayiyi virgülden sonra 2 basamakla yazdirir.
    printf("sqrt(%.1f) = %.2f\n", x, sqrt(x));

    // pow(a, b): a'nin b. kuvvetini hesaplar. pow(9.0, 2.5)
    printf("pow(%.1f, %.1f) = %.2f\n", x, y, pow(x, y));

    // ceil: yukari yuvarlar, floor: asagi yuvarlar.
    printf("ceil(%.2f) = %.2f\n", y, ceil(y));
    printf("floor(%.2f) = %.2f\n", y, floor(y));

    return 0;
}
