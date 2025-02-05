// #include <stdio.h>

// void merge(int arr[], int start, int end, int mid)
// {

//     int temp[end - start + 1];
//     int i = start;
//     int j = mid + 1;
//     int k = 0;

//     // Merge both halves
//     while (i <= mid && j <= end)
//     {
//         if (arr[i] <= arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy remaining elements from left half
//     while (i <= mid)
//     {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }

//     // Copy remaining elements from right half
//     while (j <= end)
//     {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }

//     // Copy sorted elements back to original array
//     for (i = start, k = 0; i <= end; i++, k++)
//     {
//         arr[i] = temp[k];
//     }
// }

// void mergeSort(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         int mid = start + (end - start) / 2;

//         mergeSort(arr, start, mid);   // Left part
//         mergeSort(arr, mid + 1, end); // Right part

//         // Merge the sorted halves back together
//         merge(arr, start, end, mid);
//     }
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {64, 25, 12, 22, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, size);

//     mergeSort(arr, 0, size - 1);

//     printf("Sorted array: ");
//     printArray(arr, size);

//     return 0;
// }

// -----------------------------Another approach---------------------------//

#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    int left[leftSize], right[rightSize];

    // copy data to the left[] and right []
    for (int i = 0; i < leftSize; i++)
    {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < rightSize; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = start;

    // Merge back into main array
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < leftSize)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < rightSize)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);

        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 2, 6, 98, 54, 1, 4, 45, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("After Sorting: ");
    printArray(arr, size);

    return 0;
}