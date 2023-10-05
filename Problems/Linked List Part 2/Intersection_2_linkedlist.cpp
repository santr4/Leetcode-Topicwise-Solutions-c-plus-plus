// ** Find the intersection of two linked list. (Brute Force)

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

// function to insert node at the end of the linked list.

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

// function to find the instersection between two linked list.
Node *intersectionPoint(Node *head1, Node *head2)
{
    while (head2 != NULL)
    {
        Node *temp = head1;
        while (temp != NULL)
        {
            if (temp == head2)
                return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    return NULL;
}

// function to print the linked list.
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->num << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 4);
    Node *head1 = head;
    head = head->next->next->next;
    Node *headSec = NULL;
    insertNode(headSec, 3);
    Node *head2 = headSec;
    headSec->next = head;

    // printing all the lists
    printList(head1);
    printList(head2);

    // checking if the intersection is present
    Node *answernode = intersectionPoint(head1, head2);
    if (answernode == NULL)
    {
        cout << "therefore there is no intersection present" << endl;
    }
    else
    {
        cout << "the intersection is: " << endl;
        cout << answernode->num << endl;
    }

    return 0;
}