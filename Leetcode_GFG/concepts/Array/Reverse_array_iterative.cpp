// ** program to reverse an array or string.

// ** iterative way

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int s, int e)
{
    while (s < e)
    {
        int temp = arr[e];
        arr[e] = arr[s];
        arr[s] = temp;
        s++;
        e--;
    }
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
    int arr[] = {4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // ** to print the array before reverse function
    printArray(arr, n);

    // ** reverse the array function
    reverseArray(arr, 0, n - 1);

    // ** to print the array after reverse function
    printArray(arr, n);
    return 0;
}