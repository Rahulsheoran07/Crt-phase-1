#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool isEquilateral = (a > 0) && (a == b) && (b == c);

    cout << isEquilateral << endl;
    return 0;
}
4