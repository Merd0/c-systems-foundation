#include <stdio.h>
#include <string.h>

typedef union {
    int i;
    float f;
    char s[20];
} Veri;

int main(void)
{
    Veri v;
    v.i = 42;
    printf("int: %d\n", v.i);

    v.f = 3.14f;
    printf("float: %.2f (union ayni bellegi paylasir)\n", v.f);

    strcpy(v.s, "C-Repo");
    printf("string: %s\n", v.s);
    return 0;
}
