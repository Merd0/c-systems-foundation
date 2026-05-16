#include "library.h"

#include <stdio.h>

static void kitap_yazdir(const Kitap *kitap)
{
    if (kitap == NULL)
        return;

    printf("[%d] %s - %s (%s)\n",
           kitap->id,
           kitap->baslik,
           kitap->yazar,
           kitap->oduncte ? "oduncte" : "rafta");
}

int main(void)
{
    Kutuphane kutuphane;
    kutuphane_baslat(&kutuphane);

    kutuphane_kitap_ekle(&kutuphane, "C Programlama Dili", "Kernighan ve Ritchie");
    kutuphane_kitap_ekle(&kutuphane, "Temiz Kod", "Robert C. Martin");

    kutuphane_odunc_al(&kutuphane, 1);

    for (size_t i = 0; i < kutuphane.adet; i++)
        kitap_yazdir(&kutuphane.kitaplar[i]);

    printf("Raftaki kitap sayisi: %zu\n", kutuphane_raftaki_kitap_say(&kutuphane));
    return 0;
}
