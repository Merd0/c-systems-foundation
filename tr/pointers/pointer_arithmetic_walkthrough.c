#include <stddef.h>
#include <stdio.h>

void degerleri_yazdir(const int *degerler, size_t adet)
{
    if (degerler == NULL)
    {
        return;
    }

    const int *son = degerler + adet;
    for (const int *gecerli = degerler; gecerli < son; gecerli++)
    {
        printf("index %td -> %d\n", gecerli - degerler, *gecerli);
    }
}

int main(void)
{
    int notlar[] = {70, 85, 92, 64};
    size_t adet = sizeof(notlar) / sizeof(notlar[0]);

    degerleri_yazdir(notlar, adet);

    return 0;
}

