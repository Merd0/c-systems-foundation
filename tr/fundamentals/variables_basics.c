#include <stdio.h>

int main(void)
{
    // Değişkenler veriyi isimle saklar.
    int yas = 22;
    float sicaklik = 24.5f;
    char notHarfi = 'A';

    printf("Yas: %d\n", yas);
    printf("Sicaklik: %.1f\n", sicaklik);
    printf("Not: %c\n", notHarfi);

    // Değişmeyecek değerler için const kullanmak daha güvenlidir.
    const int dogumYili = 2004;
    printf("Dogum yili: %d\n", dogumYili);

    return 0;
}
