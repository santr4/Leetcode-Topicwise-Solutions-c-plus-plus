// ** to find the duplicate element in linked list using cycle method.

#include <bits/stdc++.h>
using namespace std;

int duplicateElement(vector<int> &arr)
{
    int slow = arr[0];
    int fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main()
{
    vector<int> arr;
    arr = {1, 3, 4, 2, 3};
    cout << "the duplicate element is: " << duplicateElement(arr);
    return 0;
}