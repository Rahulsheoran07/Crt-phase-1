/*
Problem 5: Simple Calculator
Write a program that takes two numbers and an operator (+, -, *, /). Use a switch-case statement to perform the operation and display the result. Handle invalid operators.
*/

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cin >> num1 >> op >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Invalid operator";
    }

    return 0;
}