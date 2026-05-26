#include "library.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

static void kitap_ekleme_ve_bulma_testi(void)
{
    Kutuphane kutuphane;
    kutuphane_baslat(&kutuphane);

    assert(kutuphane_kitap_ekle(&kutuphane, "C Primer Plus", "Stephen Prata"));
    assert(kutuphane.adet == 1);

    const Kitap *kitap = kutuphane_id_ile_bul(&kutuphane, 1);
    assert(kitap != NULL);
    assert(strcmp(kitap->baslik, "C Primer Plus") == 0);
    assert(!kitap->oduncte);
}

static void odunc_ve_iade_testi(void)
{
    Kutuphane kutuphane;
    kutuphane_baslat(&kutuphane);

    assert(kutuphane_kitap_ekle(&kutuphane, "Sistem Programlama", "Anonim"));
    assert(kutuphane_odunc_al(&kutuphane, 1));
    assert(!kutuphane_odunc_al(&kutuphane, 1));
    assert(kutuphane_raftaki_kitap_say(&kutuphane) == 0);

    assert(kutuphane_iade_et(&kutuphane, 1));
    assert(!kutuphane_iade_et(&kutuphane, 1));
    assert(kutuphane_raftaki_kitap_say(&kutuphane) == 1);
}

int main(void)
{
    kitap_ekleme_ve_bulma_testi();
    odunc_ve_iade_testi();

    puts("kutuphane testleri basarili");
    return 0;
}
