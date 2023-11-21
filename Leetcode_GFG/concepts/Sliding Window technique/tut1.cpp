// ** sliding window technique.

// ** maximum sum of k consecutive elements in the array.

// ** brute force.

// #include <bits/stdc++.h>
// using namespace std;

// int maxsum(int arr[], int n, int k)
// {
//     int max_sum = INT_MIN;
//     for (int i = 0; i < n - k + 1; i++)
//     {
//         int current_sum = 0;
//         for (int j = 0; j < k; j++)
//         {
//             current_sum += arr[i + j];
//         }
//         max_sum = max(max_sum, current_sum);
//     }
//     return max_sum;
// }

// int main()
// {
//     int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
//     int k = 4;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << maxsum(arr, n, k);
//     return 0;
// }

// ** sliding window approach

#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{ // returns maximum sum from subarray of size of k
    if (n < k)
    {
        cout << "invalid" << endl;
        return -1;
    }

    // compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    for (int i = k; i < n; i++)
    {
        window_sum += (arr[i] - arr[i - k]);
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}