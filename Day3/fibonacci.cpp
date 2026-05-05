/*
Problem 5: Fibonacci Sequence
Write a C++ program that takes an integer N as input.
Print the first N terms of the Fibonacci sequence.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a = 0, b = 1, next;

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}