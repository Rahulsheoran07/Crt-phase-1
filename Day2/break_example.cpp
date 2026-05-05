/*
Problem 7: break Statement
Write a program that keeps taking numbers as input.
Stop when a negative number is entered and print the sum.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    while (true)
    {
        cin >> num;
        if (num < 0)
            break;
        sum += num;
    }

    cout << sum;
    return 0;
}