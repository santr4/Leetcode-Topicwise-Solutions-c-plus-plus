#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        pair<ll, ll> pp = getMinMax(arr, n);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}

pair<long long, long long> getMinMax(long long arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return {min, max};
}