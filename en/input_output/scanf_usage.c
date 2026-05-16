#include <stdio.h>

int main(void)
{
    int age;
    char name[50];

    /*
     * Goal: read a number and a line of text safely.
     * Tactic 1: check scanf's return value.
     * Tactic 2: clear the leftover newline after scanf.
     * Tactic 3: use fgets for text input. Never use gets.
     */
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1)
    {
        printf("Invalid age input.\n");
        return 1;
    }

    // scanf reads only the number. The newline from Enter remains in the buffer.
    // This loop clears that leftover input.
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        // Intentional empty body for buffer cleanup.
    }

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Name input failed.\n");
        return 1;
    }

    printf("Hello %s", name);
    printf("Age: %d\n", age);
    return 0;
}
