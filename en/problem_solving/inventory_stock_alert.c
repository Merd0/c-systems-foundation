#include <stdbool.h>
#include <stdio.h>

#define URUN_ADET 5

typedef struct {
    char ad[20];
    int stok;
    int kritikSeviye;
} Urun;

int main(void)
{
    Urun urunler[URUN_ADET] = {
        {"Kablo", 12, 10},
        {"SSD", 4, 5},
        {"RAM", 2, 4},
        {"Mouse", 7, 6},
        {"Monitor", 1, 2}};

    for (int i = 0; i < URUN_ADET; i++)
    {
        bool kritik = urunler[i].stok <= urunler[i].kritikSeviye;
        printf("%s -> stok:%d | %s\n", urunler[i].ad, urunler[i].stok, kritik ? "KRITIK" : "NORMAL");
    }

    return 0;
}
