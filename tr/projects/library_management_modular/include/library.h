#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdbool.h>
#include <stddef.h>

#define KUTUPHANE_MAKS_KITAP 100
#define KITAP_BASLIK_UZUNLUK 64
#define KITAP_YAZAR_UZUNLUK 64

typedef struct
{
    int id;
    char baslik[KITAP_BASLIK_UZUNLUK];
    char yazar[KITAP_YAZAR_UZUNLUK];
    bool oduncte;
} Kitap;

typedef struct
{
    Kitap kitaplar[KUTUPHANE_MAKS_KITAP];
    size_t adet;
} Kutuphane;

void kutuphane_baslat(Kutuphane *kutuphane);
bool kutuphane_kitap_ekle(Kutuphane *kutuphane, const char *baslik, const char *yazar);
const Kitap *kutuphane_id_ile_bul(const Kutuphane *kutuphane, int id);
bool kutuphane_odunc_al(Kutuphane *kutuphane, int id);
bool kutuphane_iade_et(Kutuphane *kutuphane, int id);
size_t kutuphane_raftaki_kitap_say(const Kutuphane *kutuphane);

#endif
