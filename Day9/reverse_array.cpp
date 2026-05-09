#include <iostream>
using namespace std;
class Reverse
{
public:
    void Reverse_array(int arr[], int n)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {

            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        for (int i = 0; i < n; i++)
        {
        }
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Reverse r1;
    r1.Reverse_array(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
