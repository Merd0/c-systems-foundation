#include <stdbool.h>
#include <stdio.h>

#define IZIN_OKU (1u << 0)
#define IZIN_YAZ (1u << 1)
#define IZIN_CALISTIR (1u << 2)

static bool izin_var_mi(unsigned int izinler, unsigned int izin)
{
    return (izinler & izin) != 0u;
}

int main(void)
{
    unsigned int izinler = 0;

    izinler |= IZIN_OKU;
    izinler |= IZIN_YAZ;

    printf("okuma: %s\n", izin_var_mi(izinler, IZIN_OKU) ? "evet" : "hayir");
    printf("yazma: %s\n", izin_var_mi(izinler, IZIN_YAZ) ? "evet" : "hayir");
    printf("calistirma: %s\n", izin_var_mi(izinler, IZIN_CALISTIR) ? "evet" : "hayir");

    izinler &= ~IZIN_YAZ;
    printf("temizleme sonrasi yazma: %s\n", izin_var_mi(izinler, IZIN_YAZ) ? "evet" : "hayir");

    izinler ^= IZIN_CALISTIR;
    printf("toggle sonrasi calistirma: %s\n",
           izin_var_mi(izinler, IZIN_CALISTIR) ? "evet" : "hayir");

    return 0;
}

