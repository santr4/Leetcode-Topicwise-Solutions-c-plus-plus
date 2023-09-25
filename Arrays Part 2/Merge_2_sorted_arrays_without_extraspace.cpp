// optimal approach 1

#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int left = n - 1;
    int right = 0;

    while (left >= 0 && right < m)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);

    cout << "after merging two sorted arrays without extra spaces" << endl;

    cout << "arr1" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << "arr2" << endl;
    for (int j = 0; j < m; j++)
    {
        cout << arr2[j] << " ";
    }

    return 0;
}