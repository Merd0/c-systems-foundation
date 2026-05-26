/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/preprocessor/conditional_compilation.c
 */

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

