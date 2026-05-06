#include <stdio.h>

int main(void)
{
    int puan = 95;
    float ortalama = 87.4567f;
    char ad[] = "Ayse";

    // Amaç: Okunabilir ve formatlı çıktı üretmek.
    printf("Ad: %s\n", ad);                     // %s -> metin
    printf("Puan: %d\n", puan);                 // %d -> int
    printf("Ortalama: %f\n", ortalama);         // %f -> float/double
    printf("Ortalama (2 basamak): %.2f\n", ortalama); // sadece 2 ondalık

    // Escape karakterleri: metni daha düzenli yazdırır.
    printf("Birinci satir\nIkinci satir\n");
    printf("Sutun1\tSutun2\n");

    // Tip uyumsuzluğu hataya yol açar: float değeri %d ile yazdırma.
    return 0;
}
