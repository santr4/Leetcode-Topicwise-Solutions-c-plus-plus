// ** using frequency array.

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int n = arr.size();

    int freq[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 0)
        {
            freq[arr[i]] += 1;
        }
        else
        {
            return arr[i];
        }
    }
    return 0;
}

int main()
{
    vector<int> arr;
    arr = {1, 3, 4, 2, 3};
    int l = findDuplicate(arr);

    if (l == 0)
    {
        cout << "no duplicate element found" << endl;
    }
    else
    {
        cout << "the duplicate element is: " << l << endl;
    }
    return 0;
}