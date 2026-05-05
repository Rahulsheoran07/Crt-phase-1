/*
Problem 2: Write a C++ program that declares a global integer variable initialized to 100.
Take an integer input from the user and divide the global value by it.
Use explicit type casting to store the result in a double variable and display it.
*/

#include <iostream>
using namespace std;

int globalValue = 100;

int main()
{
    int userInput;
    double result;

    cin >> userInput;

    result = (double)globalValue / userInput;

    cout << result << endl;
    return 0;
}