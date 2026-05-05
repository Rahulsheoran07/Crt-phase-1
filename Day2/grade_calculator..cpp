/*
Problem 8: Grade Calculator
Write a program that takes percentage (0–100) as input.
Print grade (A, B, C, D, F) based on range or invalid input.
*/

#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;

    if (p >= 90 && p <= 100)
        cout << "A";
    else if (p >= 80)
        cout << "B";
    else if (p >= 70)
        cout << "C";
    else if (p >= 60)
        cout << "D";
    else if (p >= 0)
        cout << "F";
    else
        cout << "Invalid Input";

    return 0;
}