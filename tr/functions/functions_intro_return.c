#include <stdio.h>

int kareAl(int sayi)
{
    return sayi * sayi;
}

int main(void)
{
    int deger = 6;
    int sonuc = kareAl(deger);
    printf("%d sayisinin karesi = %d\n", deger, sonuc);
    return 0;
}
