/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/bitwise/xor_toggle_demo.c
 */

#include <stdio.h>

#define GUN_MASKESI 0x1Fu
#define AY_MASKESI 0x0Fu
#define YIL_MASKESI 0x7Fu

static unsigned int tarih_paketle(unsigned int gun, unsigned int ay, unsigned int yil_2000_sonrasi)
{
    return ((yil_2000_sonrasi & YIL_MASKESI) << 9) | ((ay & AY_MASKESI) << 5) |
           (gun & GUN_MASKESI);
}

static unsigned int gun_ac(unsigned int paket)
{
    return paket & GUN_MASKESI;
}

static unsigned int ay_ac(unsigned int paket)
{
    return (paket >> 5) & AY_MASKESI;
}

static unsigned int yil_ac(unsigned int paket)
{
    return 2000u + ((paket >> 9) & YIL_MASKESI);
}

int main(void)
{
    unsigned int paket = tarih_paketle(16, 5, 26);

    printf("paket: %u\n", paket);
    printf("tarih: %u-%02u-%02u\n", yil_ac(paket), ay_ac(paket), gun_ac(paket));

    return 0;
}

