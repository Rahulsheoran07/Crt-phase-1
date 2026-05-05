/*
Problem 7: Multiplication Table
Write a C++ program that takes an integer as input.
Print its multiplication table from 1 to 10.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}