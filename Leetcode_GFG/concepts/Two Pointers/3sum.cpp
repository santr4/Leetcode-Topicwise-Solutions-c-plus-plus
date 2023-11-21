// 3Sum problem using hashmap

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> &v)
{
    // ** Hashmap approach.
    // initialize a 2D vector to store the results.
    vector<vector<int>> ans;
    unordered_map<int, int> mp; // unordered map to store the values of 2D vector as keys and its indices as values.

    sort(v.begin(), v.end()); // to sort the vector.

    int n = v.size(); // to get the size of the vector.

    // if the input size is less than 3 then triplet cannot be formed.
    if (n < 3)
    {
        return {};
    }

    if (v[0] > 0)
    { // if the first element in the array is only positive then the sum cannot be equal to zero.
        return {};
    }

    // map the numbers to their indices in the hashmap
    for (int i = 0; i < n - 1; i++)
    {
        mp[v[i]] = i;
    }

    // loop through the array to find the triplets
    for (int i = 0; i < n - 2; i++)
    {
        // skip the duplicate elements for the first element of the triplet
        if (i != 0 && v[i] == v[i - 1])
        {
            continue;
        }
        // if the current element is greater than 0 then the formation of the triplet is not possible.
        if (v[i] > 0)
        {
            return ans;
        }

        // loop through the array for the second element of the triplet.
        for (int j = i + 1; j < n - 1; j++)
        {
            // skip the duplicate values for the second element of the triplet.
            if (j != i + 1 && v[j] == v[j - 1])
            {
                continue;
            }
            // calculate the key that would sum up to zero
            int key = -(v[i] + v[j]);
            // check if the key exists in the vector and whether the indice is greater than j
            if (mp.find(key) != mp.end() && mp[key] > j)
            {
                ans.push_back({v[i], v[j], key});
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> v1 = threesum(v);
    return 0;
}