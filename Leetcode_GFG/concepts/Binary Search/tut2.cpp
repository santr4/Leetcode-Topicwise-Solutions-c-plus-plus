// ** recursive binary search algorithm

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
        {
            return m;
        }

        if (arr[m] > x)
        {
            return binarySearch(arr, l, m - 1, x);
        }

        else
        {
            return binarySearch(arr, m + 1, r, x);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "element not present in the array" << endl
        : cout << "element is present in the index" << result;
    return 0;
}