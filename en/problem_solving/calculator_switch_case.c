#include <stdio.h>

int main(void)
{
    double a, b;
    char op;

    printf("Enter expression (example: 10 + 5): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3)
        return 1;

    switch (op)
    {
    case '+': printf("Result: %.2f\n", a + b); break;
    case '-': printf("Result: %.2f\n", a - b); break;
    case '*': printf("Result: %.2f\n", a * b); break;
    case '/':
        if (b == 0)
            printf("Error: division by zero.\n");
        else
            printf("Result: %.2f\n", a / b);
        break;
    default: printf("Invalid operator\n");
    }

    return 0;
}
