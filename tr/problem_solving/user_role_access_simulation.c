#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char kullaniciAdi[20];
    char rol[10];
    bool aktif;
} Kullanici;

bool erisimVarMi(const Kullanici *k, const char *istenenIslem)
{
    if (k == NULL || !k->aktif)
        return false;

    if (strcmp(k->rol, "admin") == 0)
        return true;

    if (strcmp(k->rol, "editor") == 0 && strcmp(istenenIslem, "write") == 0)
        return true;

    if (strcmp(k->rol, "viewer") == 0 && strcmp(istenenIslem, "read") == 0)
        return true;

    return false;
}

int main(void)
{
    Kullanici k1 = {"ayse", "admin", true};
    Kullanici k2 = {"mehmet", "viewer", true};

    printf("%s write: %s\n", k1.kullaniciAdi, erisimVarMi(&k1, "write") ? "izinli" : "yasak");
    printf("%s write: %s\n", k2.kullaniciAdi, erisimVarMi(&k2, "write") ? "izinli" : "yasak");
    printf("%s read: %s\n", k2.kullaniciAdi, erisimVarMi(&k2, "read") ? "izinli" : "yasak");

    return 0;
}
