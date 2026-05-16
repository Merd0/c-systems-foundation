#include <stdio.h>

void dizi_yazdir(const int degerler[], int uzunluk)
{
    for (int i = 0; i < uzunluk; i++)
        printf("%d ", degerler[i]);
    printf("\n");
}

void int_degistir(int *a, int *b)
{
    int gecici = *a;
    *a = *b;
    *b = gecici;
}

void bubble_sort(int degerler[], int uzunluk)
{
    for (int tur = 0; tur < uzunluk - 1; tur++)
    {
        for (int i = 0; i < uzunluk - tur - 1; i++)
        {
            if (degerler[i] > degerler[i + 1])
                int_degistir(&degerler[i], &degerler[i + 1]);
        }
    }
}

void selection_sort(int degerler[], int uzunluk)
{
    for (int baslangic = 0; baslangic < uzunluk - 1; baslangic++)
    {
        int en_kucuk_index = baslangic;

        for (int i = baslangic + 1; i < uzunluk; i++)
        {
            if (degerler[i] < degerler[en_kucuk_index])
                en_kucuk_index = i;
        }

        int_degistir(&degerler[baslangic], &degerler[en_kucuk_index]);
    }
}

int partition(int degerler[], int low, int high)
{
    int pivot = degerler[high];
    int kucuk_index = low - 1;

    for (int i = low; i < high; i++)
    {
        if (degerler[i] < pivot)
        {
            kucuk_index++;
            int_degistir(&degerler[kucuk_index], &degerler[i]);
        }
    }

    int_degistir(&degerler[kucuk_index + 1], &degerler[high]);
    return kucuk_index + 1;
}

void quick_sort(int degerler[], int low, int high)
{
    if (low >= high)
        return;

    int pivot_index = partition(degerler, low, high);
    quick_sort(degerler, low, pivot_index - 1);
    quick_sort(degerler, pivot_index + 1, high);
}

int main(void)
{
    int bubble_degerler[] = {5, 1, 4, 2, 8};
    int selection_degerler[] = {29, 10, 14, 37, 13};
    int quick_degerler[] = {9, 3, 7, 1, 6, 2};

    bubble_sort(bubble_degerler, 5);
    selection_sort(selection_degerler, 5);
    quick_sort(quick_degerler, 0, 5);

    printf("Bubble: ");
    dizi_yazdir(bubble_degerler, 5);

    printf("Selection: ");
    dizi_yazdir(selection_degerler, 5);

    printf("Quick: ");
    dizi_yazdir(quick_degerler, 6);

    return 0;
}
