/*
Problem 15: Customer Support IVR System
Take user choice and display corresponding service using switch-case.
*/

#include <iostream>
using namespace std;

int main()
{
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Support";
        break;
    case 2:
        cout << "Billing";
        break;
    case 3:
        cout << "Technical";
        break;
    case 0:
        cout << "Agent";
        break;
    default:
        cout << "Invalid";
    }

    return 0;
}