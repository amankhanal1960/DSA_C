#include <stdio.h>

int binarySearch(int arr[], int start, int end, int target)
{

    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, target);
    }
}

int main()
{
    int n, target;

    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500, 600};

    n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the element to search:");

    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        printf("%d found at index %d\n", target, result);
    }
    else
    {
        return printf("%d not found in the array\n", target);
    }

    return 0;
}