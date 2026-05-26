/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/problem_solving/README.md
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_luhn_valid(const char *text)
{
    int sum = 0;
    int double_next = 0;

    for (int i = (int)strlen(text) - 1; i >= 0; i--)
    {
        if (!isdigit((unsigned char)text[i]))
            continue;

        int digit = text[i] - '0';
        if (double_next)
        {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }

        sum += digit;
        double_next = !double_next;
    }

    return (sum % 10) == 0;
}

int main(void)
{
    char card_number[64];
    printf("Enter card number: ");
    if (fgets(card_number, sizeof(card_number), stdin) == NULL)
        return 1;

    printf("Result: %s\n", is_luhn_valid(card_number) ? "Valid" : "Invalid");
    return 0;
}
