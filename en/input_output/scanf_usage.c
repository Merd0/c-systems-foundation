#include <stdio.h>

int main(void)
{
    int age;
    char name[50];

    /*
     * Goal: read number + text safely.
     * Trick 1: always check scanf return value.
     * Trick 2: clear trailing '\n' left by scanf.
     * Trick 3: use fgets for text input (never gets).
     */

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1)
    {
        printf("Invalid age input.\n");
        return 1;
    }

    // scanf reads the number only; Enter leaves '\n' in the buffer.
    // This loop clears leftover characters.
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        // Buffer-cleaning loop body can stay empty.
    }

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Name input failed.\n");
        return 1;
    }

    printf("Hello %s", name);
    printf("Your age: %d\n", age);

    return 0;
}
