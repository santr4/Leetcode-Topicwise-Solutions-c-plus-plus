#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    int b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < 3; j++)
    {
        cin >> b[j];
    }
    int arr[2] = {0};
    for (int k = 0; k < 3; k++)
    {
        if (a[k] < b[k])
        {
            arr[1]++;
        }
        else if (a[k] > b[k])
        {
            arr[0]++;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}