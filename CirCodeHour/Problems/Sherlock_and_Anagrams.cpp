#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    getchar();
    while (cases--)
    {
        unordered_map<string, int> mp;
        string s;
        getline(cin, s);
        int n = s.size();
        for (int length = 1; length < n; length++)
        {
            for (int i = 0; i <= n - length; i++)
            {
                string t = s.substr(i, length);
                sort(t.begin(), t.end());
                mp[t]++;
            }
        }
        long long ans = 0;
        for (auto t : mp)
        {
            ans += (long long)t.second * (t.second - 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}