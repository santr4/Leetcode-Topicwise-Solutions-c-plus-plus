#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A)
{
    int n = A.size(); // size of the array

    // find the break point
    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            ind = i;
            break;
        }
    }

    // if break point doesnot exist
    if (ind == -1)
    {
        // reverse the whole array because the array is in descending order.
        reverse(A.begin(), A.end());
        return A;
    }

    // find the next greater element and swap it with the arr[break-point]
    for (int i = n - 1; i > ind; i--)
    {
        if (A[i] > A[ind])
        {
            swap(A[i], A[ind]);
            break;
        }
    }

    // reverse the right half of the array
    reverse(A.begin() + 1 + ind, A.end());

    return A;
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0}; // ** here 1 is the break point as 1 < 5 => first we have to swap the breakpoint with just larger number and then reverse the right half.
    vector<int> ans = nextGreaterPermutation(A);
    cout << "the next permutation is: " << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}