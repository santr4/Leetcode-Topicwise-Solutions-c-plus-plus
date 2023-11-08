// ** reverse a string.
// ** first to last swap approach.

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     string reverse_string(string s)
//     {
//         int n = s.length();
//         for (int i = 0; i < n / 2; i++)
//         {
//             swap(s[i], s[n - i - 1]);
//         }
//         return s;
//     }
// };

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         Solution obj;
//         cout << obj.reverse_string(s) << endl;
//     }
//     return 0;
// }

// ** recursion function with two pointer approach.

// #include <iostream>
// using namespace std;

// // ** function to reverse string
// void reverse_str(string &s, int n, int i)
// {
//     if (n <= i)
//     {
//         return;
//     }
//     swap(s[i], s[n]);
//     reverse_str(s, n - 1, i + 1);
// }

// int main()
// {
//     string s = "aaranyak";
//     reverse_str(s, s.length() - 1, 0);
//     cout << s;
//     return 0;
// }

// ** using built-in function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aaranyak";
    reverse(s.begin(), s.end());

    cout << s << endl;
    return 0;
}