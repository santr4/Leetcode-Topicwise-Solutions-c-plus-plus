// ** optimal solution to find the intersection between two linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
    Node(int x)
    {
        this->num = x;
        this->next = NULL;
    }
};

// function to insert node at end
void insertNode(Node *&head, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return;
}

// function to find the intersection of two linked lists
Node *intersectionPresent(Node *head1, Node *head2)
{
    Node *d1 = head1;
    Node *d2 = head2;

    while (d1 != d2)
    {
        d1 = (d1 == NULL) ? head2 : d1->next;
        d2 = (d2 == NULL) ? head1 : d2->next;
    }

    return d1;
}

// function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->num << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // creating both the lists.
    Node *head = NULL;
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 4);

    Node *head1 = head;
    head = head->next->next->next;
    Node *headSecond = NULL;
    insertNode(headSecond, 3);
    Node *head2 = headSecond;
    headSecond->next = head;

    // printing of the lists
    printList(head1);
    printList(head2);

    // checking if transaction is present
    Node *answernode = intersectionPresent(head1, head2);
    if (answernode == NULL)
    {
        cout << "there is no interesection" << endl;
    }
    else
    {
        cout << answernode->num << endl;
    }

    return 0;
}