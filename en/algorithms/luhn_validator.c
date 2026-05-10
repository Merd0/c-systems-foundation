#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool luhnGecerliMi(const char *s)
{
    int sum = 0, alt = 0;
    for (int i = (int)strlen(s) - 1; i >= 0; i--)
    {
        if (!isdigit((unsigned char)s[i])) continue;
        int d = s[i] - '0';
        if (alt) { d *= 2; if (d > 9) d -= 9; }
        sum += d;
        alt = !alt;
    }
    return (sum % 10) == 0;
}

int main(void)
{
    char kart[64];
    printf("Kart numarasi gir: ");
    if (fgets(kart, sizeof(kart), stdin) == NULL) return 1;
    printf("Sonuc: %s\n", luhnGecerliMi(kart) ? "Gecerli" : "Gecersiz");
    return 0;
}
