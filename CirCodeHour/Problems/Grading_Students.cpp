#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int grades[n];
    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];
        int x = grades[i];
        int y = (x / 5) + 1;
        if (x < 38)
        {
            grades[i] = grades[i];
        }
        else
        {
            int z = (5 * y) - x;
            if (z < 3)
            {
                grades[i] = 5 * y;
            }
            else
            {
                grades[i] = grades[i];
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << grades[j] << endl;
    }
    return 0;
}