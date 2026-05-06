#include <stdbool.h>
#include <stdio.h>

#define PASS_GRADE 50

int main(void)
{
    const float pi = 3.14f; // const: should not change at runtime
    int arr[5] = {10, 20, 30, 40, 50};
    int score = 67;

    bool isPassed = score >= PASS_GRADE;

    printf("pi = %.2f\n", pi);
    printf("Pass grade (#define) = %d\n", PASS_GRADE);
    printf("Passed? %s\n", isPassed ? "Yes" : "No");

    printf("int size: %zu bytes\n", sizeof(int));
    printf("array total size: %zu bytes\n", sizeof(arr));
    printf("element count: %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
