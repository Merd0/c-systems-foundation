#include <stdio.h>
#include "math_utils.h"

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main(void)
{
    printf("Add: %d\n", add(8, 3));
    printf("Sub: %d\n", sub(8, 3));
    return 0;
}
