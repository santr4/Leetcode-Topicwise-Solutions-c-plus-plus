#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct Meeting
{
    int start;
    int end;
    int pos;
};

class Solution
{
public:
    bool static comparator(struct Meeting m1, struct Meeting m2)
    {
        if (m1.end < m2.end)
        {
            return true;
        }
        else if (m1.end > m2.end)
        {
            return false;
        }
        if (m1.pos < m2.pos)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        // Your code here
        struct Meeting meet[n];
        for (int i = 0; i < n; i++)
        {
            meet[i].start = s[i], meet[i].end = e[i], meet[i].pos = i + 1;
        }
        sort(meet, meet + n, comparator);

        vector<int> ans;
        int limit = meet[0].end;
        ans.push_back(meet[0].pos);
        for (int i = 1; i < n; i++)
        {
            if (meet[i].start > limit)
            {
                limit = meet[i].end;
                ans.push_back(meet[i].pos);
            }
        }
        int x = ans.size();
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends