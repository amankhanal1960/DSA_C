#include <stdio.h>
#include <stdlib.h>

// Function to print the subset
void printSubset(int subset[], int subSetSize)
{
    printf("{ ");
    for (int i = 0; i < subSetSize; i++)
    {
        printf("%d", subset[i]);
    }
    printf(" }\n");
}

int genetateSubset(int array[], int n, int subset[], int subsetSize, int index)
{
    printSubset(subset, subsetSize);

    // after this condition is met, the backtracking starts i.e. after index = 3
    for (int i = index; i < n; i++)
    {
        subset[subsetSize] = array[i];

        genetateSubset(array, n, subset, subsetSize + 1, i + 1);
    }
}

int main()
{
    int array[] = {1, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);

    int subset[n];

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("All subsets:\n");
    genetateSubset(array, n, subset, 0, 0);

    return 0;
}