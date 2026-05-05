// Write a C++ program that takes three integers as input.
// Calculate and display their sum and average.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    double avg = sum / 3.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << fixed << setprecision(2) << avg << endl;

    return 0;
}