// ** Detect a cycle in a linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
    Node(int val)
    {
        this->num = val;
        this->next = NULL;
    }
};

// function to insert node in the linked list.
void insertNode(Node *&head, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return;
}

// function to create cycle in the linked list.
void createCycle(Node *head, int a, int b)
{
    int cnta = 0, cntb = 0;
    Node *p1 = head;
    Node *p2 = head;
    while (cnta != a || cntb != b)
    {
        if (cnta != a)
        {
            p1 = p1->next;
            cnta++;
        }
        if (cntb != b)
        {
            p2 = p2->next;
            cntb++;
        }
    }
    p2->next = p1;
}

// function to detect cycle in the linked list.
bool detectCycle(Node *head)
{
    unordered_set<Node *> hashTable;
    while (head != NULL)
    {
        if (hashTable.find(head) != hashTable.end())
            return true;
        hashTable.insert(head);
        head = head->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);

    createCycle(head, 1, 3);
    if (detectCycle(head) == true)
    {
        cout << "cycle detected in linked list" << endl;
    }
    else
    {
        cout << "cycle is not detected" << endl;
    }
    return 0;
}