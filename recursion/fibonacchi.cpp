#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n - 1) + (n - 2);
}
int main()
{
    int n = 5;
    int result = fib(n);
    printf("%d\n", result);

    return 0;
}