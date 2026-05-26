#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    double bakiye = 1000.0;
    int secim;
    bool calisiyor = true;

    while (calisiyor)
    {
        printf("\n--- Mini ATM ---\n");
        printf("1) Bakiye Goster\n2) Para Yatir\n3) Para Cek\n4) Cikis\nSecim: ");

        if (scanf("%d", &secim) != 1)
        {
            printf("Hatali giris.\n");
            return 1;
        }

        switch (secim)
        {
        case 1:
            printf("Guncel bakiye: %.2f TL\n", bakiye);
            break;
        case 2:
        {
            double tutar;
            printf("Yatirilacak tutar: ");
            if (scanf("%lf", &tutar) != 1 || tutar <= 0)
            {
                printf("Gecersiz tutar.\n");
                break;
            }
            bakiye += tutar;
            printf("Yeni bakiye: %.2f TL\n", bakiye);
            break;
        }
        case 3:
        {
            double tutar;
            printf("Cekilecek tutar: ");
            if (scanf("%lf", &tutar) != 1 || tutar <= 0)
            {
                printf("Gecersiz tutar.\n");
                break;
            }
            if (tutar > bakiye)
                printf("Yetersiz bakiye!\n");
            else
            {
                bakiye -= tutar;
                printf("Yeni bakiye: %.2f TL\n", bakiye);
            }
            break;
        }
        case 4:
            calisiyor = false;
            printf("Cikis yapildi.\n");
            break;
        default:
            printf("Gecersiz secim.\n");
        }
    }

    return 0;
}
