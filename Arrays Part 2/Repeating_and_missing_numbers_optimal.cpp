// ** Optimal Approach

#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    long long n = a.size(); // size of the array.

    // now calculate sn and s2n
    long long sn = (n * (n + 1)) / 2;
    long long s2n = (n * (n + 1) * (2 * n + 1)) / 6;

    // calculate s and s2
    long long s = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        s2 += (long long)a[i] * (long long)a[i];
    }

    // s - sn = x - y
    long long val1 = s - sn;

    // s2 - s2n = x^2 - y^2
    long long val2 = s2 - s2n;

    // find x+y
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = val2 - x;

    return {(int)x, (int)y};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);

    cout << "the repeating and missing numbers in the array are: " << endl;
    cout << "repeating: " << ans[0] << ","
         << "missing: " << ans[1];
    return 0;
}