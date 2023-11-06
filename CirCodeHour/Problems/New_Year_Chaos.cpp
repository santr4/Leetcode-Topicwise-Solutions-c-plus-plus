#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> q(n);
        for (int i = 0; i < n; i++)
        {
            cin >> q[i];
        }
        int ans = 0; // this will be used to store the number of bribes made.
        for (int i = n - 1; i >= 0; i--)
        {
            if (ans == -1)
            {
                break;
            }
            int k = i;
            while (q[k] != i + 1)
            {
                k--;
            }
            if (i - k > 2)
            {
                ans = -1;
                break;
            }
            else
            {
                while (k != i)
                {
                    swap(q[k], q[k + 1]);
                    k++;
                    ans++;
                }
            }
        }
        if (ans == -1)
        {
            cout << "Too chaotic" << endl;
        }
        else
        {
            cout << ans << "\n";
        }
    }
    return 0;
}