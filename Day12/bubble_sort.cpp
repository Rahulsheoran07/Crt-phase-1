#include <iostream>
using namespace std;
void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Bubble_Sort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                cout << "Array is Sorted Here" << endl;
                swap_array(nums[j], nums[j + 1]);
                flag = true; // flag != flag;
            }
        }
        if (!flag)
        {
            cout << "Array is already Sorted" << endl;
            break;
        }
    }
}

int main()
{
    int arr[6] = {8, 7, 3, 6, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    Bubble_Sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}