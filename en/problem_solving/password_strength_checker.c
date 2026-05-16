#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_strong_password(const char *text)
{
    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    int length = (int)strlen(text);

    for (int i = 0; i < length; i++)
    {
        if (isupper((unsigned char)text[i]))
            has_upper = true;
        if (islower((unsigned char)text[i]))
            has_lower = true;
        if (isdigit((unsigned char)text[i]))
            has_digit = true;
    }

    return length >= 8 && has_upper && has_lower && has_digit;
}

int main(void)
{
    char password[100];
    printf("Enter password: ");
    if (scanf("%99s", password) != 1)
        return 1;

    printf("Password status: %s\n", is_strong_password(password) ? "Strong" : "Weak");
    return 0;
}
