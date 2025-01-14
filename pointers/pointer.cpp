#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // int a = 10;

    // pointer
    // int *ptr = &a;

    // pointer to a pointer
    // int **ptr2 = &ptr;

    // cout << ptr << endl;
    // cout << &a << endl;

    // cout << &ptr << endl;
    // cout << ptr2 << endl;

    // dereferencing a pointer
    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    // cout << *(ptr2) << endl;
    // cout << **(ptr2) << endl;

    // Pointer arthemetic
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // here the memory address increases by one byte

    return 0;
}