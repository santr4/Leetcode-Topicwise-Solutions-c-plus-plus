// ** find the middle element of a linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class NodeOperation
{
public:
    void pushNode(class Node **head_ref, int data_val)
    {
        // allocate a new node
        class Node *new_node = new Node();
        new_node->data = data_val;
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
};

int main()
{
    class Node *head = NULL;
    class NodeOperation *temp = new NodeOperation();
    for (int i = 5; i > 0; i--)
    {
        temp->pushNode(&head, i);
    }
    vector<int> v;
    while (head != NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
    cout << "the middle element of the linked list: " << endl;
    cout << v[v.size() / 2] << endl;
    return 0;
}