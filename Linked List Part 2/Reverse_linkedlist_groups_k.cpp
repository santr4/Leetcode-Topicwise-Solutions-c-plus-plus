// ** reverse linked list of groups of k
// ! Leetcode Hard Problem

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
    Node(int a)
    {
        this->num = a;
        this->next = NULL;
    }
};

// function to insert node from last.
void insertNode(Node *&head, int x)
{
    Node *newnode = new Node(x);

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

// function to calculate length of the linked list.
int lengthofLinkedlist(Node *head)
{
    int l = 0;
    while (head != NULL)
    {
        l++;
        head = head->next;
    }
    return l;
}

// function to reverse k nodes at a time in linked list
Node *reverseKnodes(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    int length = lengthofLinkedlist(head);

    Node *dummyhead = new Node(0);
    dummyhead->next = head;

    Node *pre = dummyhead;
    Node *curr;
    Node *nex;

    while (length >= k)
    {
        curr = pre->next;
        nex = curr->next;
        for (int i = 1; i < k; i++)
        {
            curr->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = curr->next;
        }
        pre = curr;
        length -= k;
    }

    return dummyhead->next;
}

// function to print linked list
void printLinkedlist(Node *head)
{
    while (head != NULL)
    {
        cout << head->num << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    int k = 3;

    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 7);
    insertNode(head, 8);

    cout << "original linked list" << endl;
    printLinkedlist(head);
    cout << endl;
    cout << "after reversal of k nodes at a time in linked list" << endl;
    Node *newHead = reverseKnodes(head, k);
    printLinkedlist(newHead);

    return 0;
}