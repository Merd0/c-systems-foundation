#include <stdio.h>

int main(void)
{
    int grades[5] = {78, 92, 64, 88, 73};
    int total = 0;
    int highest = grades[0];
    int lowest = grades[0];

    for (int i = 0; i < 5; i++)
    {
        total += grades[i];
        if (grades[i] > highest)
            highest = grades[i];
        if (grades[i] < lowest)
            lowest = grades[i];
    }

    double average = (double)total / 5;

    printf("Student Grade Dashboard\n");
    printf("Average: %.2f\n", average);
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);

    if (average >= 85)
        printf("Status: excellent performance\n");
    else if (average >= 70)
        printf("Status: good performance\n");
    else
        printf("Status: improvement needed\n");

    return 0;
}
