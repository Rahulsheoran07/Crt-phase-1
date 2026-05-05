/*
Problem 5: Ternary Operator
Write a C++ program that takes two integers as input.
Use the ternary operator to find and print the maximum.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int max_val = (a > b) ? a : b;
    cout << max_val;

    return 0;
}