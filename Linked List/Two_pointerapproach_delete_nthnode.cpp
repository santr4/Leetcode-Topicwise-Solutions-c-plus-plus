// ** Two pointer approach used to delete nth node from the end of the linked list.

#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
public:
    // Linked List Node
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

    // Head of linked list
    Node *head;

    // Function to delete nth node from the end of the linked list
    Node *deleteNode(int key)
    {
        // temporary pointer to hold address
        Node *temp;

        // first ptr to point to the head and travel till the node to be deleted from the end.
        Node *first = head;

        // second ptr will point nth node from the beginning.
        Node *second = head;
        for (int i = 0; i < key; i++)
        {
            if (second->next == NULL)
            {
                if (i == key - 1)
                {
                    temp = head;
                    head = head->next;
                    free(temp);
                }
                return head;
            }
            second = second->next;
        }

        // increment the pointers till the second ptr reaches the end of the linked list.
        while (second->next != NULL)
        {
            first = first->next;
            second = second->next;
        }

        // Now as the first node has reached the node which needs to be deleted
        temp = first->next;
        first->next = first->next->next;
        free(temp);
        return head;
    }

    // Function to push the node at the front of the linked list
    Node *push(int new_data)
    {
        Node *new_node = new Node(new_data);
        new_node->next = head;
        head = new_node;
        return head;
    }

    // Function to print the linked list
    void printList()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << " " << ptr->data;
            ptr = ptr->next;
        }
    }
};

int main()
{
    LinkedList *ll = new LinkedList();
    ll->head = ll->push(7);
    ll->head = ll->push(1);
    ll->head = ll->push(3);
    ll->head = ll->push(2);

    cout << "the created linked list is: " << endl;
    ll->printList();

    int N = 1; // The position of the node to be deleted from the end of the linked list.
    ll->head = ll->deleteNode(N);

    cout << "LinkedList after deletion of the nth node from the end: " << endl;
    ll->printList();

    return 0;
}