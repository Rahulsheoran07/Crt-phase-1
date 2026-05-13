#include <iostream>
using namespace std;

bool isPowerOfFour(int n)
{
    if (n <= 0)
    {
        return false;
    }
    while (n % 4 == 0)
    {
        n = n / 4;
    }
    return n == 1;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfFour(n))
    {
        cout << n << " is a Power of four";
    }
    else
    {
        cout << n << " is NOT a Power of four";
    }

    return 0;
}