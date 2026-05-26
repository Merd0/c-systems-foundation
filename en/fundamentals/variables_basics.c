#include <stdio.h>

int main(void)
{
    // Variables store data under a meaningful name.
    int age = 22;
    float temperature = 24.5f;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature);
    printf("Grade: %c\n", grade);

    // Use const for values that should not change.
    const int birth_year = 2004;
    printf("Birth year: %d\n", birth_year);

    return 0;
}
