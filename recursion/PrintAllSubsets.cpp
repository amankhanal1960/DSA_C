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
    printf(" }");
}

int genetateSubset(int array[], int n, int subset[], int subsetSize, int index)
{
    printSubset(subset, subsetSize);

    for (i = index; i < n; i++)
    {
    }
}