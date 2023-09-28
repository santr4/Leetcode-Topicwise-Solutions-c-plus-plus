// ** Find the duplicate in an array of N+1 integers

#include <bits/stdc++.h>
using namespace std;

int duplicateIntegers(int arr[], int n)
{
    int ele;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ele = arr[i];
                break;
            }
        }
    }
    return ele;
}

int main()
{
    int arr[] = {3, 1, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = duplicateIntegers(arr, n);

    cout << "therefore the duplicate element is: " << endl;
    cout << x << endl;
    return 0;
}