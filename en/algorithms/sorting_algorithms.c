#include <stdio.h>

void yazdir(const int a[], int n){ for(int i=0;i<n;i++) printf("%d ",a[i]); printf("\n"); }
void swap(int *a, int *b){ int t=*a; *a=*b; *b=t; }

void bubbleSort(int a[], int n){ for(int i=0;i<n-1;i++) for(int j=0;j<n-i-1;j++) if(a[j]>a[j+1]) swap(&a[j],&a[j+1]); }
void selectionSort(int a[], int n){ for(int i=0;i<n-1;i++){ int min=i; for(int j=i+1;j<n;j++) if(a[j]<a[min]) min=j; swap(&a[i],&a[min]); } }

int partition(int a[], int low, int high){ int pivot=a[high], i=low-1; for(int j=low;j<high;j++) if(a[j]<pivot){ i++; swap(&a[i],&a[j]); } swap(&a[i+1],&a[high]); return i+1; }
void quickSort(int a[], int low, int high){ if(low<high){ int pi=partition(a,low,high); quickSort(a,low,pi-1); quickSort(a,pi+1,high);} }

int main(void)
{
    int a1[] = {5,1,4,2,8};
    int a2[] = {29,10,14,37,13};
    int a3[] = {9,3,7,1,6,2};

    bubbleSort(a1,5); selectionSort(a2,5); quickSort(a3,0,5);
    printf("Bubble: "); yazdir(a1,5);
    printf("Selection: "); yazdir(a2,5);
    printf("Quick: "); yazdir(a3,6);
    return 0;
}
