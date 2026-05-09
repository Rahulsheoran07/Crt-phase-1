#include <iostream>
using namespace std;
class Sum
{
public:
    int sum_of_array(int arr[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sum s1;
    int ans = s1.sum_of_array(arr, n);
    cout << ans << endl;
    return 0;
}