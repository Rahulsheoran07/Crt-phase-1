#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    // Taking input from the user
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        // Printing the array elements
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        return 0;
    }
}