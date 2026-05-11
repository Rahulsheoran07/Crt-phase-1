#include <iostream>
using namespace std;
class Solution
{
public:
    int linearSearch(int nums[], int n, int target)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution obj;
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 3;

    int result = obj.linearSearch(nums, n, target);
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