// ** find the repeating and missing numbers

#include <bits/stdc++.h>
using namespace std;

pair<int, int> findRepeatingMissing(int arr[], int n)
{
    pair<int, int> x;
    int freq[n] = {0};
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - 1] += 1;
    }
    int f = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq[i] > 1)
        {
            f = i + 1;
        }
        else if (freq[i] == 0)
        {
            m = i + 1;
        }
        else
        {
            continue;
        }
    }
    x.first = f;
    x.second = m;

    return x;
}

int main()
{
    int arr[] = {3, 1, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int, int> x = findRepeatingMissing(arr, n);

    cout << "therefore the repeating and missing numbers in the array are: " << endl;
    cout << x.first << endl;
    cout << x.second << endl;
    return 0;
}