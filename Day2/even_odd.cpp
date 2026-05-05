/*
Problem 11: Even or Odd
Write a C++ program that checks whether a number is even or odd.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}