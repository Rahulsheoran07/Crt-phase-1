/*
Problem 4: Bitwise Operations
Write a C++ program that takes two integers as input.
 Multiply the first number by 4 using a left shift operator,
 then swap both numbers using XOR without a temporary variable. Print the results.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    a = a << 2;

    // XOR Swap
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << "\n"
         << b << endl;

    return 0;
}