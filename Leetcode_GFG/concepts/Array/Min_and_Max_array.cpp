// ** Minimum and Maximum of an array using minimum number of operations.

// #include <bits/stdc++.h>
// using namespace std;

// struct Pair
// {
//     int min;
//     int max;
// };

// Pair getMinMax(int arr[], int n)
// {
//     Pair minmax;

//     sort(arr, arr + n);

//     minmax.min = arr[0];
//     minmax.max = arr[n - 1];

//     return minmax;
// }

// int main()
// {
//     int arr[] = {12, 3, 0, 88, 100, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     Pair minmax = getMinMax(arr, n);

//     cout << "the minimum element in the array is: " << minmax.min << endl;
//     cout << "the maximum element in the array is: " << minmax.max << endl;
//     return 0;
// }

// ** Min and Max of an array using linear search

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;

    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
        return minmax;
    }

    if (arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else if (arr[0] <= arr[1])
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 8, 3, 2, 0, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, n);

    cout << "the minimum element of the array is: " << minmax.min << endl;
    cout << "the maximum element of the array is: " << minmax.max << endl;
    return 0;
}