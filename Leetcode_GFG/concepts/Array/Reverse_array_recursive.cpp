// ** program to reverse array in recursive way.

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    reverseArray(arr, ++s, --e);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    reverseArray(arr, 0, n - 1);

    printArray(arr, n);
    return 0;
}