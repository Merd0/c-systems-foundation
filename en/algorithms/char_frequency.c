/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/algorithms/most_frequent_character.c
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int frequency[26] = {0};
    char text[256];

    printf("Enter text: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = (char)tolower((unsigned char)text[i]);
        if (c >= 'a' && c <= 'z')
            frequency[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (frequency[i] > 0)
            printf("%c: %d\n", 'a' + i, frequency[i]);

    return 0;
}
