// ** Job Sequencing Problem

#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int ID;
    int dead;
    int profit;
};

class Solution
{
public:
    bool static comparision(Job a, Job b)
    {
        return (a.profit > b.profit);
    }

    pair<int, int> JobScheduling(Job arr[], int n)
    {
        sort(arr, arr + n, comparision);
        int maxi = arr[0].dead;
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi, arr[i].dead);
        }

        int slot[maxi + 1];

        for (int i = 0; i <= maxi; i++)
        {
            slot[i] = -1;
        }

        int countJobs = 0, JobProfit = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = arr[i].dead; j > 0; j--)
            {
                if (slot[j] == -1)
                {
                    slot[j] = i;
                    countJobs++;
                    JobProfit += arr[i].profit;
                    break;
                }
            }
        }
        return make_pair(countJobs, JobProfit);
    }
};

int main()
{
    int n = 4;
    struct Job arr[n] = {{1, 4, 20}, {2, 1, 10}, {3, 2, 40}, {4, 2, 30}};
    Solution obj;

    pair<int, int> ans = obj.JobScheduling(arr, n);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}