#include <stdio.h>

#define GUVENSIZ_KARE(x) ((x) * (x))

static int kare_al(int deger)
{
    return deger * deger;
}

int main(void)
{
    int deger = 5;

    printf("macro kare: %d\n", GUVENSIZ_KARE(deger));
    printf("fonksiyon kare: %d\n", kare_al(deger));

    /*
     * Bundan kacin:
     *
     * int i = 3;
     * int sonuc = GUVENSIZ_KARE(i++);
     *
     * Macro, i++ ifadesini iki kez calistirir.
     */

    return 0;
}

