#include <iostream>
#include <math.h>
using namespace std;

int main()

    // simple left faced pyramid
    // {
    //     int n = 4;

    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j <= i; j++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }

    // left faced number pyramid with resetting
    // {
    //     int n = 4;
    //     for (int i = 0; i < n; i++)
    //     {

    //         for (int j = 0; j < i + 1; j++)
    //         {
    //             cout << (j + 1) << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    // left faced number pyramid without resetting(floyds triangle)
    // {
    //     int n = 4;

    //     int num = 1;

    //     for (int i = 0; i < n; i++)
    //     {

    //         for (int j = 0; j < i + 1; j++)
    //         {
    //             cout << num << " ";
    //             num = num + 1;
    //         }
    //         cout << endl;
    //     }
    // }

    // reverse triangle pattern of numbers
    // {
    //     int n = 4;
    //     for (int i = 0; i <= n; i++)
    //     {

    //         for (int j = i + 1; j > 0; j--)
    //         {
    //             cout << (j) << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    // printing characters pyramid without resetting
    // {
    //     int n = 5;
    //     char ch = 'A';
    //     for (int i = 0; i < n; i++)
    //     {

    //         for (int j = 0; j < i + 1; j++)
    //         {
    //             cout << (ch) << " ";
    //         }
    //         ch = ch + 1;

    //         cout << endl;
    //     }
    // }

    // printing characters pyramid with resetting (floyds triangle)
    // {
    //     int n = 5;
    //     char ch = 'A';
    //     for (int i = 0; i < n; i++)
    //     {

    //         for (int j = 0; j < i + 1; j++)
    //         {
    //             cout << (ch) << " ";
    //             ch = ch + 1;
    //         }

    //         cout << endl;
    //     }
    // }

    // reverse characeter triangle
    // {
    //     int n = 5;
    //     char ch = 'A';
    //     for (int i = 0; i < n; i++)
    //     {

    //         for (int j = 0; j <= i; j++)
    //         {
    //             cout << static_cast<char>(ch - j) << " ";
    //         }
    //         ch = ch + 1;

    //         cout << endl;
    //     }
    // }

    // simple right faced pyramid
    // {
    //     int n = 10;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = i; j < n; j++)
    //         {
    //             std::cout << "  ";
    //         }
    //         for (int k = 1; k <= i; k++)
    //         {
    //             std::cout << "*";
    //         }
    //         std::cout << std::endl;
    //     }

    //     return 0;
    // }
    // printing square A B C D  without resetting
    // {
    //     int n = 3;
    //     char ch = 'A';

    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << ch << "\t";
    //             ch = ch + 1;
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }

    // printing ABCD with resetting
    // {
    //     int n = 3;

    //     for (int i = 0; i < n; i++)
    //     {
    //         char ch = 'A';

    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << ch << "\t";
    //             ch = ch + 1;
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }

    // printing 1234 without resetting
    // {
    //     int n = 3;
    //     int x = 1;

    //     for (int i = 0; i <= n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << x << "\t";
    //             x = x + 1;
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }

    // number pyramid
    //  {
    //      int n = 9;

    //     for (int i = 0; i < n; i++)
    //     {
    //         int x = 1;
    //         for (int j = n - 1; j > i; j--)
    //         {
    //             cout << " ";
    //         }
    //         for (int k = 0; k <= i; k++)
    //         {

    //             cout << x;
    //             x = x + 1;
    //         }
    //         for (int l = i; l > 0; l--)
    //         {
    //             cout << l;
    //         }

    //         cout << endl;
    //     }
    // }