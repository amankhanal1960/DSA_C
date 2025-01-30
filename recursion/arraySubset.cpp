#include <stdio.h>

void printSubset(int *arr, int n, int index, int *currentSubset, int subsetSize)
{
    if (index == n)
    {
        printf("{");
        for (int i = 0; i < subsetSize; i++)
        {
            printf("%d ", currentSubset[i]);
        }
        printf("}");
    }
}

int main()
{
    int n;

    return 0;
}