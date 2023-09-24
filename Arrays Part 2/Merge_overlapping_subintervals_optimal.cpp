// ** optimal solution

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingSubintervals(vector<vector<int>> &arr)
{
    int n = arr.size();

    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || ans[i][0] > ans.back()[1])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingSubintervals(arr);
    return 0;
}