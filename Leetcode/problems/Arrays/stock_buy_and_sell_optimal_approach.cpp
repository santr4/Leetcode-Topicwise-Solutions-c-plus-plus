// ** optimal approach

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int MP(vector<int> &arr)
{
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT64_MAX;

    for (int i = 0; i < n; i++)
    {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    return maxPro;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxPro = MP(arr);
    cout << "Therefore the maximum profit is: " << endl;
    cout << maxPro << endl;
    return 0;
}