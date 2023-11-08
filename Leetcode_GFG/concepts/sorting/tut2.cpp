// selection sorting

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
    cout << endl;
    cout << "after selection sort" << endl;
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "before selection sort" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "/n";
    selection_sort(arr, n);
    return 0;
}