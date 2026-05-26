#include <stdio.h>

int main(void)
{
    int choice;
    printf("Choose: 1-Add 2-Subtract 3-Multiply 4-Divide: ");
    if (scanf("%d", &choice) != 1)
        return 1;

    switch (choice)
    {
    case 1:
        printf("Addition selected\n");
        break;
    case 2:
        printf("Subtraction selected\n");
        break;
    case 3:
        printf("Multiplication selected\n");
        break;
    case 4:
        printf("Division selected\n");
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
