#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    int min = scores[0];
    int max = scores[0];
    int s_min = 0, s_max = 0;
    for (int i = 1; i < n; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            s_max++;
        }
        else if (scores[i] < min)
        {
            min = scores[i];
            s_min++;
        }
    }
    cout << s_max << " " << s_min;
    return 0;
}