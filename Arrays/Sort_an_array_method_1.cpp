// to sort the array with 0's,1's and 2's without using any inbuilt function.

#include <iostream>
#include <algorithm>
using namespace std;

int *sort(int nums[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                swap(nums[i], nums[j]);
            }
        }
    }
    return nums;
}

int main()
{
    int *arr;   // using pointers
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    arr = sort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}