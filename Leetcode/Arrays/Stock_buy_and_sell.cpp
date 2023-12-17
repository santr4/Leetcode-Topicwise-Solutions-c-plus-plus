// ** brute force approach.

#include <bits/stdc++.h>
using namespace std;

int maximum_profit(int arr[], int n)
{
    int maxPro = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
    }
    return maxPro;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = maximum_profit(arr, n);
    cout << "The maximum profit gained after the stock has been sold is: " << endl;
    cout << x << endl;
    return 0;
}