#include <stdio.h>

typedef struct
{
    int id;
    char ad[32];
    double fiyat;
    int stok;
} Urun;

void urun_yazdir(const Urun *urun)
{
    if (urun == NULL)
    {
        return;
    }

    printf("[%d] %-12s | fiyat: %.2f | stok: %d\n",
           urun->id,
           urun->ad,
           urun->fiyat,
           urun->stok);
}

int main(void)
{
    Urun klavye = {
        .id = 101,
        .ad = "Klavye",
        .fiyat = 79.99,
        .stok = 12,
    };

    Urun mouse = {
        .id = 102,
        .ad = "Mouse",
        .fiyat = 39.50,
        .stok = 25,
    };

    urun_yazdir(&klavye);
    urun_yazdir(&mouse);

    return 0;
}

