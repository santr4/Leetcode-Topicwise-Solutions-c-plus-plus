// better approach for the sorting of an array.

#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr, int n)
{
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
    }
    for (int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count_0; i < count_0 + count_1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count_0 + count_1; i < count_0 + count_1 + count_2; i++)
    {
        arr[i] = 2;
    }
}

int main()
{
    int n;
    cout << "enter the size of the vector to be sorted" << endl;
    cin >> n;
    vector<int> arr;
    cout << "enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr, n);
    cout << "after sorting of the array" << endl;
    for (int z = 0; z < n; z++)
    {
        cout << arr[z] << " ";
    }
    return 0;
}