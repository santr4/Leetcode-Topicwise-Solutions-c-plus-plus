// ** Merge two sorted arrays without extra space.

#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    long long arr3[n + m];
    int left = 0;
    int right = 0;

    int index = 0;
    while (left < n && right < m)
    {
        if (arr1[left] <= arr2[right])
        {
            arr3[index] = arr1[left];
            index++;
            left++;
        }
        else
        {
            arr3[index] = arr2[right];
            index++;
            right++;
        }
    }

    while (left < n)
    {
        arr3[index] = arr1[left];
        left++;
        index++;
    }

    while (right < m)
    {
        arr3[index] = arr2[right];
        right++;
        index++;
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            arr1[i] = arr3[i];
        }
        else
        {
            arr2[i - n] = arr3[i];
        }
    }
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "after merging the sorted arrays: " << endl;
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
    cout << endl;
    return 0;
}