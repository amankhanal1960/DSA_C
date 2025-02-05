#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i; // Assume the first element is the minimum

        // Find the actual minimum element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11, 16, 9, 39};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("After sorting: ");
    printArray(arr, n);

    return 0;
}
