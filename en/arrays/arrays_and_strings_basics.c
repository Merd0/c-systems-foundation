#include <stdio.h>
#include <string.h>

int main(void)
{
    int grades[4] = {70, 85, 90, 60};
    int total = 0;

    for (int i = 0; i < 4; i++)
        total += grades[i];

    printf("Average: %.2f\n", (double)total / 4);

    char name[] = "Ahmet"; // character array (string)
    printf("Name: %s, length: %zu\n", name, strlen(name));
    printf("ASCII 'A' = %d\n", 'A');

    return 0;
}
