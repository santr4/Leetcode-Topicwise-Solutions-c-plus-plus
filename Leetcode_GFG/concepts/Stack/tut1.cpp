#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.pop();
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
    return 0;
}