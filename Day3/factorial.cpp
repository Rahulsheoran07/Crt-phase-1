/*
Problem 4: Factorial Calculation
Write a C++ program that takes a positive integer N as input.
Calculate and print its factorial using a for loop.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << fact;
    return 0;
}