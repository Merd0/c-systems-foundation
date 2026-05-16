#include <stdio.h>

typedef union
{
    int int_olarak;
    double double_olarak;
    char metin_olarak[16];
} Deger;

int main(void)
{
    printf("sizeof(int): %zu\n", sizeof(int));
    printf("sizeof(double): %zu\n", sizeof(double));
    printf("sizeof(char[16]): %zu\n", sizeof(char[16]));
    printf("sizeof(Deger): %zu\n", sizeof(Deger));

    Deger deger;
    deger.int_olarak = 42;
    printf("aktif int_olarak: %d\n", deger.int_olarak);

    deger.double_olarak = 3.14;
    printf("aktif double_olarak: %.2f\n", deger.double_olarak);

    return 0;
}

