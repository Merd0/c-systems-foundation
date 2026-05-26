#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("tr_file_demo.txt", "w");
    if (fp == NULL) return 1;

    fputs("Merhaba Dosya\n", fp);
    fprintf(fp, "Sayi: %d\n", 42);
    fclose(fp);

    fp = fopen("tr_file_demo.txt", "a");
    if (fp == NULL) return 1;
    fputs("Append satiri\n", fp);
    fclose(fp);

    fp = fopen("tr_file_demo.txt", "r");
    if (fp == NULL) return 1;

    int ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
