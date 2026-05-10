#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char metin[256];
    int frekans[256] = {0};

    printf("Metin gir: ");
    if (fgets(metin, sizeof(metin), stdin) == NULL) return 1;

    for (int i = 0; metin[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)tolower((unsigned char)metin[i]);
        if (c != ' ' && c != '\n') frekans[c]++;
    }

    int enCok = 0;
    char harf = '-';
    for (int i = 0; i < 256; i++)
        if (frekans[i] > enCok) { enCok = frekans[i]; harf = (char)i; }

    printf("En cok tekrar eden karakter: %c (%d kez)\n", harf, enCok);
    return 0;
}
