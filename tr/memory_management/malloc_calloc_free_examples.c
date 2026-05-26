/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/memory_management/realloc_growth_buffer.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) return 1;

    for (int i = 0; i < n; i++) a[i] = (i + 1) * 10;

    int *b = (int *)calloc(n, sizeof(int));
    if (b == NULL) { free(a); return 1; }

    for (int i = 0; i < n; i++) b[i] = a[i] + 1;

    for (int i = 0; i < n; i++)
        printf("a[%d]=%d b[%d]=%d\n", i, a[i], i, b[i]);

    free(a);
    free(b);
    a = NULL;
    b = NULL;
    return 0;
}
