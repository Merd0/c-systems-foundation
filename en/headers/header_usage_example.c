#include <stdio.h>
#include "math_utils.h"

int topla(int a, int b) { return a + b; }
int cikar(int a, int b) { return a - b; }

int main(void)
{
    printf("Topla: %d\n", topla(8, 3));
    printf("Cikar: %d\n", cikar(8, 3));
    return 0;
}
