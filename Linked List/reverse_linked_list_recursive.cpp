// ** reversal of linked list using recursion.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    Node *reverse(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        // reverse the list and put the first element in the end.
        Node *rest = reverse(head->next);
        head->next->next = head;

        head->next = NULL;

        return rest;
    }

    void print()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    LinkedList l1;

    l1.push(23);
    l1.push(45);
    l1.push(9);
    l1.push(1);

    cout << "the given linkedlist is: " << endl;
    l1.print();

    l1.head = l1.reverse(l1.head);

    cout << "reversed linked list: " << endl;
    l1.print();
    return 0;
}