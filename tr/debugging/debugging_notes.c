#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;

    // Debugger ile breakpoint koyup adim adim degerleri izle.
    if (b == 0)
    {
        printf("Uyari: sifira bolme engellendi.\n");
        return 1;
    }

    printf("Sonuc: %d\n", a / b);
    return 0;
}
