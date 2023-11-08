// ** fractional knapsack problem using greedy approach

#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

class Solution
{
public:
    bool static comparision(Item a, Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

    double knapsackproblem(int w, Item arr[], int n)
    {
        sort(arr, arr + n, comparision);

        int currentweight = 0;
        double finalvalue = 0.0;

        for (int i = 0; i < n; i++)
        {
            if (currentweight + arr[i].weight <= w)
            {
                currentweight += arr[i].weight;
                finalvalue += arr[i].value;
            }
            else
            {
                int remain = w - currentweight;
                finalvalue += (arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return finalvalue;
    }
};

int main()
{
    int n = 3, weight = 50;
    Item arr[n] = {{100, 20}, {60, 10}, {120, 30}};
    Solution obj;
    double ans = obj.knapsackproblem(weight, arr, n);
    cout << "the maximum value is: " << setprecision(2) << fixed << ans << endl;

    return 0;
}