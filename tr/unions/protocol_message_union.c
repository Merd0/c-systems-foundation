/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/memory_management/README.md
 */

#include <stdio.h>

typedef enum
{
    MESAJ_LOGIN,
    MESAJ_DATA,
    MESAJ_PING
} MesajTipi;

typedef struct
{
    MesajTipi tip;
    union
    {
        struct
        {
            char kullanici_adi[24];
        } login;
        struct
        {
            int byte_sayisi;
            char payload[32];
        } data;
        struct
        {
            unsigned int sira;
        } ping;
    } govde;
} Mesaj;

void mesaj_isle(const Mesaj *mesaj)
{
    if (mesaj == NULL)
    {
        return;
    }

    switch (mesaj->tip)
    {
    case MESAJ_LOGIN:
        printf("login: %s\n", mesaj->govde.login.kullanici_adi);
        break;
    case MESAJ_DATA:
        printf("data: %d byte, payload=%s\n",
               mesaj->govde.data.byte_sayisi,
               mesaj->govde.data.payload);
        break;
    case MESAJ_PING:
        printf("ping: sira=%u\n", mesaj->govde.ping.sira);
        break;
    }
}

int main(void)
{
    Mesaj mesajlar[] = {
        {.tip = MESAJ_LOGIN, .govde.login.kullanici_adi = "ada"},
        {.tip = MESAJ_DATA, .govde.data = {.byte_sayisi = 5, .payload = "merhaba"}},
        {.tip = MESAJ_PING, .govde.ping.sira = 77},
    };

    for (size_t i = 0; i < sizeof(mesajlar) / sizeof(mesajlar[0]); i++)
    {
        mesaj_isle(&mesajlar[i]);
    }

    return 0;
}

