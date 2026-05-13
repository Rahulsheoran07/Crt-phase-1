#include <iostream>
using namespace std;

bool isPowerOfThree(int n)
{
    if (n <= 0)
    {
        return false;
    }
    while (n % 3 == 0)
    {
        n = n / 3;
    }
    return n == 1;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfThree(n))
    {
        cout << n << " is a Power of Three";
    }
    else
    {
        cout << n << " is NOT a Power of Three";
    }

    return 0;
}