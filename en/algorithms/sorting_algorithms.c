#include <stdio.h>

void print_array(const int values[], int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", values[i]);
    printf("\n");
}

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int values[], int length)
{
    for (int pass = 0; pass < length - 1; pass++)
    {
        for (int i = 0; i < length - pass - 1; i++)
        {
            if (values[i] > values[i + 1])
                swap_int(&values[i], &values[i + 1]);
        }
    }
}

void selection_sort(int values[], int length)
{
    for (int start = 0; start < length - 1; start++)
    {
        int min_index = start;

        for (int i = start + 1; i < length; i++)
        {
            if (values[i] < values[min_index])
                min_index = i;
        }

        swap_int(&values[start], &values[min_index]);
    }
}

int partition(int values[], int low, int high)
{
    int pivot = values[high];
    int smaller_index = low - 1;

    for (int i = low; i < high; i++)
    {
        if (values[i] < pivot)
        {
            smaller_index++;
            swap_int(&values[smaller_index], &values[i]);
        }
    }

    swap_int(&values[smaller_index + 1], &values[high]);
    return smaller_index + 1;
}

void quick_sort(int values[], int low, int high)
{
    if (low >= high)
        return;

    int pivot_index = partition(values, low, high);
    quick_sort(values, low, pivot_index - 1);
    quick_sort(values, pivot_index + 1, high);
}

int main(void)
{
    int bubble_values[] = {5, 1, 4, 2, 8};
    int selection_values[] = {29, 10, 14, 37, 13};
    int quick_values[] = {9, 3, 7, 1, 6, 2};

    bubble_sort(bubble_values, 5);
    selection_sort(selection_values, 5);
    quick_sort(quick_values, 0, 5);

    printf("Bubble: ");
    print_array(bubble_values, 5);

    printf("Selection: ");
    print_array(selection_values, 5);

    printf("Quick: ");
    print_array(quick_values, 6);

    return 0;
}
