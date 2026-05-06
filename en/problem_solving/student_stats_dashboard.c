#include <stdio.h>

int main(void)
{
    int grades[5] = {78, 92, 64, 88, 73};
    int total = 0, max = grades[0], min = grades[0];

    for (int i = 0; i < 5; i++)
    {
        total += grades[i];
        if (grades[i] > max)
            max = grades[i];
        if (grades[i] < min)
            min = grades[i];
    }

    double average = (double)total / 5;

    printf("Student Grade Dashboard\n");
    printf("Average: %.2f\n", average);
    printf("Highest: %d\n", max);
    printf("Lowest: %d\n", min);

    if (average >= 85)
        printf("Status: Excellent performance\n");
    else if (average >= 70)
        printf("Status: Good performance\n");
    else
        printf("Status: Needs improvement\n");

    return 0;
}
