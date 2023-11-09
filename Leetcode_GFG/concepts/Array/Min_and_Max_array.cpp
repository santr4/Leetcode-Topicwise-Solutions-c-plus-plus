// ** Minimum and Maximum of an array using minimum number of operations.

#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    Pair minmax;

    sort(arr, arr + n);

    minmax.min = arr[0];
    minmax.max = arr[n - 1];

    return minmax;
}

int main()
{
    int arr[] = {12, 3, 0, 88, 100, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, n);

    cout << "the minimum element in the array is: " << minmax.min << endl;
    cout << "the maximum element in the array is: " << minmax.max << endl;
    return 0;
}