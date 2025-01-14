#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }

    if (arr[n - 1] < arr[n - 2])
    {
        return false;
    }

    return isSorted(arr, n - 1);
}

int main()
{
    int arr[] = {1, 2, 8, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n))
    {
        printf("Array is sorted\n");
    }
    else
    {
        printf("Array is not sorted\n");
    }

    return 0;
}