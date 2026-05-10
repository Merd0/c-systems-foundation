#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    float average;
} Student;

int main(void)
{
    Student classroom[2] = {
        {"Ayse", 20, 88.5f},
        {"Mehmet", 21, 76.0f}};

    for (int i = 0; i < 2; i++)
        printf("%s | age:%d | avg:%.1f\n", classroom[i].name, classroom[i].age, classroom[i].average);

    return 0;
}
