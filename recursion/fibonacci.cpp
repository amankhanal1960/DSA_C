#include <stdio.h>
#include <math.h>

void printNew(int *x0, int *x1)
{
    int newfib;
    newfib = *x0 + *x1;

    *x0 = *x1;
    *x1 = newfib;
}
int main()
{
    int x0 = 0;
    int x1 = 1;

    printf("%d ", x0);
    printf("%d ", x1);

    for (int i = 0; i < 10; i++)
    {
        printNew(&x0, &x1);
        printf("%d ", x1);
    }

    return 0;
}
