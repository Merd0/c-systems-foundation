/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/file_io/line_based_records.c
 */

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("file_demo.txt", "w");
    if (fp == NULL)
        return 1;

    fputs("Hello file\n", fp);
    fprintf(fp, "Number: %d\n", 42);
    fclose(fp);

    fp = fopen("file_demo.txt", "a");
    if (fp == NULL)
        return 1;
    fputs("Appended line\n", fp);
    fclose(fp);

    fp = fopen("file_demo.txt", "r");
    if (fp == NULL)
        return 1;

    int ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
