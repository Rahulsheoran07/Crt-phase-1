#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{

    // Negative numbers and 0 are not powers of 2
    if (n <= 0)
    {
        return false;
    }

    // Bit manipulation check
    return (n & (n - 1)) == 0;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfTwo(n))
    {
        cout << n << " is a Power of Two";
    }
    else
    {
        cout << n << " is NOT a Power of Two";
    }

    return 0;
}