#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(const char text[])
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
    char word[] = "radar";
    printf("%s -> %s\n", word, isPalindrome(word) ? "Palindrome" : "Not palindrome");
    return 0;
}
