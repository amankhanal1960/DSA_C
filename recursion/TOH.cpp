#include <stdio.h>

// Recursive function for Tower of Hanoi
void towerOfHanoi(int n, int source, int destination, int auxiliary)
{
    if (n == 1)
    {
        // Base case: Move the only disk directly
        printf("Move disk 1 from rod %d to rod %d\n", source, destination);
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary using destination as buffer
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move the nth disk from source to destination
    printf("Move disk %d from rod %d to rod %d\n", n, source, destination);

    // Step 3: Move n-1 disks from auxiliary to destination using source as buffer
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the recursive Tower of Hanoi function
    towerOfHanoi(n, 1, 3, 2); // 1: Source, 3: Destination, 2: Auxiliary

    return 0;
}
