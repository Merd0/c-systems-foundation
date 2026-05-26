#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool gucluMu(const char *s)
{
    bool hasUpper = false, hasLower = false, hasDigit = false;
    int len = (int)strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (isupper((unsigned char)s[i])) hasUpper = true;
        if (islower((unsigned char)s[i])) hasLower = true;
        if (isdigit((unsigned char)s[i])) hasDigit = true;
    }

    return len >= 8 && hasUpper && hasLower && hasDigit;
}

int main(void)
{
    char sifre[100];
    printf("Sifre gir: ");
    if (scanf("%99s", sifre) != 1) return 1;

    printf("Sifre durumu: %s\n", gucluMu(sifre) ? "Guclu" : "Zayif");
    return 0;
}
