#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    int ans = 0;
    for (int k = 1; k <= 100; k++)
    {
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (k % a[i] != 0)
            {
                ok = false;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (b[j] % k != 0)
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    int x = getTotalX(a, b);
    cout << x << endl;
    return 0;
}