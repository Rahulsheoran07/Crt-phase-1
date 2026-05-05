#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (i == 1 || i == r || j == 1 || j == r)
                cout << " *";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}