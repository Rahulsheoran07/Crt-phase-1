#include <iostream>
using namespace std;
void InsertionSort(int nums[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > key)
        {
            cout << "Moving " << nums[j] << " to position " << j + 1 << endl;
            nums[j + 1] = nums[j];
            j--;
        }
        cout << "Inserting " << key << " at position " << j + 1 << endl;
        nums[j + 1] = key;
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

    InsertionSort(nums, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}