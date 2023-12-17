// ** reverse a linked list by iterative method.

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

    // function to reverse the linked list.
    void reverse()
    {
        Node *curr = head;
        Node *prev = NULL, *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
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
    l1.push(2);
    l1.push(56);
    l1.push(8);
    l1.push(23);

    cout << "the given linkedlist is: " << endl;
    l1.print();

    l1.reverse();

    cout << "the linkedlist after reversal: " << endl;
    l1.print();
    return 0;
}