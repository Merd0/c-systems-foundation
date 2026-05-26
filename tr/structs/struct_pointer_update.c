#include <stdio.h>

typedef struct
{
    char ad[20];
    int stok;
} Urun;

void stokArttir(Urun *u, int miktar)
{
    if (u != NULL && miktar > 0)
        u->stok += miktar;
}

int main(void)
{
    Urun kalem = {"Kalem", 10};
    stokArttir(&kalem, 5);
    printf("%s stok: %d\n", kalem.ad, kalem.stok);
    return 0;
}
