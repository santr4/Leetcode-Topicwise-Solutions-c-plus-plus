#include <bits/stdc++.h>
using namespace std;

int beautifulTriplets(int arr[], int d, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] == d)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[k] - arr[j] == d)
                    {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int triplets = beautifulTriplets(arr, d, n);
    cout << triplets << endl;
}