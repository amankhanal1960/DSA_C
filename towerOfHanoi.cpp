#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    // Move n-1 disks from source to auxiliary peg
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination peg
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary peg to destination peg
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    // int n = 3;  //number of disks
    // A is the source peg, C is the destination peg, B is the auxiliary peg.
    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}
