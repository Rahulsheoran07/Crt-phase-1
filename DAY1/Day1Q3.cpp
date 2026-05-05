/*
Problem 1: Temperature Conversion
Write a C++ program that takes a temperature in Celsius as input,
converts it to Fahrenheit, and prints the result.
*/

#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << fahrenheit << endl;
    return 0;
}