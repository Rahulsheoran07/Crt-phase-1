#include <iostream>
using namespace std;
class Largest
{
public:
    int largest_of_array(int arr[], int n)
    {
        int largest = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        return largest;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Largest l1;
    int ans = l1.largest_of_array(arr, n);
    cout << ans << endl;
    return 0;
}