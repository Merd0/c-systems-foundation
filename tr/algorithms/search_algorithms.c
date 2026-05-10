#include <stdio.h>

int linearSearch(const int arr[], int n, int target)
{
    for (int i = 0; i < n; i++) if (arr[i] == target) return i;
    return -1;
}

int binarySearch(const int arr[], int n, int target)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main(void)
{
    int sorted[] = {3, 7, 9, 12, 18, 21, 30};
    int n = sizeof(sorted) / sizeof(sorted[0]);
    int target = 18;

    printf("Linear index: %d\n", linearSearch(sorted, n, target));
    printf("Binary index: %d\n", binarySearch(sorted, n, target));
    return 0;
}
