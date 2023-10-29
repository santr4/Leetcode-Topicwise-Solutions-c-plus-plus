// find number of digits in the integer which divides it.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int nr = n;
    int counter = 0;
    while (nr > 0)
    {
        int c = nr % 10;
        nr = nr / 10;
        if (n % c == 0 && c != 0)
        {
            counter++;
        }
    }
    cout << counter << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}