#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char metin[256];
    int frekans[26] = {0};

    printf("Metin gir: ");
    if (fgets(metin, sizeof(metin), stdin) == NULL) return 1;

    for (int i = 0; metin[i] != '\0'; i++)
    {
        char c = (char)tolower((unsigned char)metin[i]);
        if (c >= 'a' && c <= 'z') frekans[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (frekans[i] > 0) printf("%c: %d\n", 'a' + i, frekans[i]);

    return 0;
}
