#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    double balance = 1000.0;
    int choice;
    bool running = true;

    while (running)
    {
        printf("\n--- Mini ATM ---\n");
        printf("1) Show Balance\n2) Deposit\n3) Withdraw\n4) Exit\nChoice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice)
        {
        case 1:
            printf("Current balance: %.2f TL\n", balance);
            break;
        case 2:
        {
            double amount;
            printf("Deposit amount: ");
            if (scanf("%lf", &amount) != 1 || amount <= 0)
            {
                printf("Invalid amount.\n");
                break;
            }
            balance += amount;
            printf("New balance: %.2f TL\n", balance);
            break;
        }
        case 3:
        {
            double amount;
            printf("Withdraw amount: ");
            if (scanf("%lf", &amount) != 1 || amount <= 0)
            {
                printf("Invalid amount.\n");
                break;
            }
            if (amount > balance)
                printf("Insufficient balance!\n");
            else
            {
                balance -= amount;
                printf("New balance: %.2f TL\n", balance);
            }
            break;
        }
        case 4:
            running = false;
            printf("Exited.\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
