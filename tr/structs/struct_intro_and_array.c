#include <stdio.h>

typedef struct
{
    char ad[20];
    int yas;
    float ortalama;
} Ogrenci;

int main(void)
{
    Ogrenci sinif[2] = {
        {"Ayse", 20, 88.5f},
        {"Mehmet", 21, 76.0f}};

    for (int i = 0; i < 2; i++)
        printf("%s | yas:%d | ort:%.1f\n", sinif[i].ad, sinif[i].yas, sinif[i].ortalama);

    return 0;
}
