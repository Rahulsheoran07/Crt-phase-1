#include <iostream>
using namespace std;
void selectionSort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        cout << "Swapping " << nums[i] << " and " << nums[minIndex] << endl;
        swap(nums[i], nums[minIndex]);
    }
};
int main()
{
    int nums[] = {8, 7, 3, 6, 5, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    selectionSort(nums, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}