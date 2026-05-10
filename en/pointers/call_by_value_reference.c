#include <stdio.h>

void degeriArtirValue(int x)
{
    x++;
}

void degeriArtirReference(int *x)
{
    if (x != NULL)
        (*x)++;
}

int main(void)
{
    int sayi = 10;
    degeriArtirValue(sayi);
    printf("Call by value sonrasi: %d\n", sayi);

    degeriArtirReference(&sayi);
    printf("Call by reference sonrasi: %d\n", sayi);
    return 0;
}
