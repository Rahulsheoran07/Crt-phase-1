/*
Problem 6: Swap Two Numbers
Write a C++ program that takes two integers as input. Swap their values using a temporary variable and display the updated values.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << a << "\n"
         << b << endl;

    return 0;
}