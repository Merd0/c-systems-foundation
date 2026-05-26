/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/problem_solving/mini_atm_simulation.c
 */

#include <stdio.h>

int main(void)
{
    double a, b;
    char op;

    printf("Islem gir (ornek: 10 + 5): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3)
        return 1;

    switch (op)
    {
    case '+': printf("Sonuc: %.2f\n", a + b); break;
    case '-': printf("Sonuc: %.2f\n", a - b); break;
    case '*': printf("Sonuc: %.2f\n", a * b); break;
    case '/':
        if (b == 0)
            printf("Hata: sifira bolme yok.\n");
        else
            printf("Sonuc: %.2f\n", a / b);
        break;
    default: printf("Gecersiz operator\n");
    }

    return 0;
}
