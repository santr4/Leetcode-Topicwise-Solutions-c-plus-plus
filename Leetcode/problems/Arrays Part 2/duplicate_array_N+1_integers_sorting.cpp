// ** find the duplicate elements in the array uisng sorting method.

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &v)
{
    int size = v.size();

    sort(v.begin(), v.end());

    for (int i = 0; i < size - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            return v[i];
        }
    }
}

int main()
{
    vector<int> v = {1, 3, 4, 2, 2};
    int x = findDuplicate(v);

    cout << "the duplicate element in the array is: " << endl;
    cout << x << endl;
    return 0;
}