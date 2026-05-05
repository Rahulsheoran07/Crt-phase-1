/*
Problem 2: if-else Statement
Write a C++ program that takes age as input.
Print "Eligible to vote" if age >= 18, otherwise print "Not eligible to vote".
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
    else
    {
        cout << "Not eligible to vote\n";
    }

    return 0;
}