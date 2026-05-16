#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int frequency[256] = {0};
    char text[256];

    printf("Enter text: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    for (int i = 0; text[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)tolower((unsigned char)text[i]);
        if (c != ' ' && c != '\n')
            frequency[c]++;
    }

    int highest_count = 0;
    char most_frequent = '\0';
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > highest_count)
        {
            highest_count = frequency[i];
            most_frequent = (char)i;
        }
    }

    printf("Most frequent character: %c (%d times)\n", most_frequent, highest_count);
    return 0;
}
