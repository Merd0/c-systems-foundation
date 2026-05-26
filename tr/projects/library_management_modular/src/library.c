/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 */

#include "library.h"

#include <stdio.h>

static Kitap *kutuphane_id_ile_mutable_bul(Kutuphane *kutuphane, int id)
{
    if (kutuphane == NULL)
        return NULL;

    for (size_t i = 0; i < kutuphane->adet; i++)
    {
        if (kutuphane->kitaplar[i].id == id)
            return &kutuphane->kitaplar[i];
    }

    return NULL;
}

void kutuphane_baslat(Kutuphane *kutuphane)
{
    if (kutuphane == NULL)
        return;

    kutuphane->adet = 0;
}

bool kutuphane_kitap_ekle(Kutuphane *kutuphane, const char *baslik, const char *yazar)
{
    if (kutuphane == NULL || baslik == NULL || yazar == NULL)
        return false;

    if (kutuphane->adet >= KUTUPHANE_MAKS_KITAP)
        return false;

    Kitap *kitap = &kutuphane->kitaplar[kutuphane->adet];
    kitap->id = (int)kutuphane->adet + 1;
    snprintf(kitap->baslik, sizeof(kitap->baslik), "%s", baslik);
    snprintf(kitap->yazar, sizeof(kitap->yazar), "%s", yazar);
    kitap->oduncte = false;

    kutuphane->adet++;
    return true;
}

const Kitap *kutuphane_id_ile_bul(const Kutuphane *kutuphane, int id)
{
    if (kutuphane == NULL)
        return NULL;

    for (size_t i = 0; i < kutuphane->adet; i++)
    {
        if (kutuphane->kitaplar[i].id == id)
            return &kutuphane->kitaplar[i];
    }

    return NULL;
}

bool kutuphane_odunc_al(Kutuphane *kutuphane, int id)
{
    Kitap *kitap = kutuphane_id_ile_mutable_bul(kutuphane, id);
    if (kitap == NULL || kitap->oduncte)
        return false;

    kitap->oduncte = true;
    return true;
}

bool kutuphane_iade_et(Kutuphane *kutuphane, int id)
{
    Kitap *kitap = kutuphane_id_ile_mutable_bul(kutuphane, id);
    if (kitap == NULL || !kitap->oduncte)
        return false;

    kitap->oduncte = false;
    return true;
}

size_t kutuphane_raftaki_kitap_say(const Kutuphane *kutuphane)
{
    if (kutuphane == NULL)
        return 0;

    size_t rafta = 0;
    for (size_t i = 0; i < kutuphane->adet; i++)
    {
        if (!kutuphane->kitaplar[i].oduncte)
            rafta++;
    }

    return rafta;
}
