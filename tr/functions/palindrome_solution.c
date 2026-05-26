/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/headers/header_usage_example.c
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool palindromMu(const char metin[])
{
    int sol = 0;
    int sag = (int)strlen(metin) - 1;
    while (sol < sag)
    {
        if (metin[sol] != metin[sag])
            return false;
        sol++;
        sag--;
    }
    return true;
}

int main(void)
{
    char kelime[] = "radar";
    printf("%s -> %s\n", kelime, palindromMu(kelime) ? "Palindrom" : "Degil");
    return 0;
}
