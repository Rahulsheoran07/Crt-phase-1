/*
Problem 1: Simple if Statement
Write a C++ program that takes a person's age as input.
If the age is 18 or above, print "Eligible to vote".
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligible to vote\n";
    }

    return 0;
}