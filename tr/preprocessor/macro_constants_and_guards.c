/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/preprocessor/macro_pitfalls.c
 */

#include <stdio.h>

#define UYGULAMA_ADI "C Systems Foundation"
#define MAKSIMUM_KULLANICI 100

/*
 * Header dosyalari include guard kullanmalidir:
 *
 * #ifndef CONFIG_H
 * #define CONFIG_H
 * declaration'lar burada olur
 * #endif
 */

int main(void)
{
    printf("%s\n", UYGULAMA_ADI);
    printf("maksimum kullanici: %d\n", MAKSIMUM_KULLANICI);

    return 0;
}

