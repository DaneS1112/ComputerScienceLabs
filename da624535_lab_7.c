#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        int swaps = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);

                swaps++;
            }
        }
        printf("Number of swaps needed for index %d: %d\n", i, swaps);
    }



}

int main() {
    int arr[] = { 97,16,45,63,13,22,7,58,72 };
    int n = 9;
    bubbleSort(arr, n);

    return 0;
}