#include <stdio.h>

/*
 * Hatali pattern:
 *
 * int *kotu_adres(void)
 * {
 *     int lokal = 42;
 *     return &lokal;
 * }
 *
 * Local degisken fonksiyon bitince yasamaz. Donen pointer dangling pointer olur.
 */

void cevabi_doldur(int *cikis_degeri)
{
    if (cikis_degeri != NULL)
    {
        *cikis_degeri = 42;
    }
}

int main(void)
{
    int cevap = 0;
    cevabi_doldur(&cevap);
    printf("cevap: %d\n", cevap);

    return 0;
}

