// ** Delete given node in linked list.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

// function to insert node at the end of linked list
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
}

// function to get reference of node to be deleted
Node *getNode(Node *head, int val)
{
    while (head->data != val)
    {
        head = head->next;
    }
    return head;
}

// delete function as per the question
void deleteNode(Node *t)
{
    t->data = t->next->data;
    t->next = t->next->next;
    return;
}

// function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;

    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);

    cout << "given linked list" << endl;
    printList(head);

    Node *t = getNode(head, 3);
    deleteNode(t);

    cout << "linked list after deletion" << endl;
    printList(head);
    return 0;
}