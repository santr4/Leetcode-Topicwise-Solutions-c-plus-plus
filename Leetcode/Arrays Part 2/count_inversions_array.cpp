// ** count inversions in an array.

// logic - for i & j < size of array and i < j then a[j] < a[i] where a[] - array.

#include <bits/stdc++.h>
using namespace std;

int numberofInversions(vector<int> &arr, int n)
{

    // count the number of pairs
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = 5;
    int cnt = numberofInversions(arr, n);
    cout << "the number of inversions: " << endl;
    cout << cnt << endl;

    return 0;
}