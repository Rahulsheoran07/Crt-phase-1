#include <iostream>
using namespace std;

class Solution
{
public:
    int binarySearch(int nums[], int n, int target)
    {
        int start = 0;
        int end = n - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution obj;

    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    int result = obj.binarySearch(nums, n, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}