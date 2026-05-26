#include <stdio.h>

int main(void)
{
    int yas;
    char isim[50];

    /*
     * Amaç: Kullanıcıdan güvenli şekilde sayı + metin almak.
     * Taktik 1: scanf dönüş değerini kontrol et.
     * Taktik 2: scanf sonrası kalan '\n' karakterini temizle.
     * Taktik 3: metin için fgets kullan (gets kullanma).
     */

    printf("Yasinizi girin: ");
    if (scanf("%d", &yas) != 1)
    {
        printf("Gecersiz yas girisi.\n");
        return 1;
    }

    // scanf sadece sayıyı alır, Enter'a basınca kalan '\n' buffer'da kalır.
    // Bu döngü, o kalan karakterleri temizler.
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        // Buffer temizleme döngüsü: gövde boş kalabilir.
    }

    printf("Isminizi girin: ");
    if (fgets(isim, sizeof(isim), stdin) == NULL)
    {
        printf("Isim girisi basarisiz.\n");
        return 1;
    }

    printf("Merhaba %s", isim);
    printf("Yasiniz: %d\n", yas);

    return 0;
}
