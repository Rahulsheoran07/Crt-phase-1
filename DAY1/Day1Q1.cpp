/*
Problem 3: Logical and Relational Evaluation
Write a program that takes three integers as input representing triangle sides.
 Check if the triangle is equilateral and valid (all sides equal and greater than zero).
 Output 1 if true, otherwise 0.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool isEquilateral = (a > 0) && (a == b) && (b == c);

    cout << isEquilateral << endl;
    return 0;
}