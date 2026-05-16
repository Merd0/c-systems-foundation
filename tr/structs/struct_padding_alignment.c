#include <stddef.h>
#include <stdio.h>

typedef struct
{
    char etiket;
    int adet;
    double fiyat;
} UrunYerlesimi;

typedef struct
{
    double fiyat;
    int adet;
    char etiket;
} DahaSikiUrunYerlesimi;

int main(void)
{
    printf("UrunYerlesimi boyutu: %zu\n", sizeof(UrunYerlesimi));
    printf("  etiket offset: %zu\n", offsetof(UrunYerlesimi, etiket));
    printf("  adet offset:   %zu\n", offsetof(UrunYerlesimi, adet));
    printf("  fiyat offset:  %zu\n", offsetof(UrunYerlesimi, fiyat));

    printf("DahaSikiUrunYerlesimi boyutu: %zu\n", sizeof(DahaSikiUrunYerlesimi));
    printf("  fiyat offset:  %zu\n", offsetof(DahaSikiUrunYerlesimi, fiyat));
    printf("  adet offset:   %zu\n", offsetof(DahaSikiUrunYerlesimi, adet));
    printf("  etiket offset: %zu\n", offsetof(DahaSikiUrunYerlesimi, etiket));

    return 0;
}
