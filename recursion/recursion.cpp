#include <iostream>
using namespace std;

void printNums(int n)
{
    // recursive functions
    if (n == 1)
    {
        cout << "1\n";
        return;
    }

    cout << n << " ";
    printNums(n - 1);
}

int main()
{
    printNums(10);
    return 0;
}