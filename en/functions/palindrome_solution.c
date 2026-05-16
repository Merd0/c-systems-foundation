#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrome(const char text[])
{
    int left = 0;
    int right = (int)strlen(text) - 1;

    while (left < right)
    {
        if (text[left] != text[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main(void)
{
    char word[] = "level";
    printf("%s -> %s\n", word, is_palindrome(word) ? "Palindrome" : "Not palindrome");
    return 0;
}
