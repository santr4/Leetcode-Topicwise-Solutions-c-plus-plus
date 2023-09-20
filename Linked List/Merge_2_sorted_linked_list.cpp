// ** Merge two sorted linked list --> external space method.
// ** time complexity - o(n1+n2).

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    struct ListNode *next;
    ListNode(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked list.
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode dummy(0);
    ListNode *curr = &dummy;

    while (l1 && l2)
    {
        if (l1->data < l2->data)
        {
            curr->next = l1;
            l1 = l1->next;
        }
        else
        {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }

    // if one list is exhausted, then append the other elements of the list to the dummy list.
    if (l1)
    {
        curr->next = l1;
    }
    else
    {
        curr->next = l2;
    }
    return dummy.next; // ** this is actually the head of the merged linked list.
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode *l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);

    // Merge the two linked list and print the result
    ListNode *merged = mergeTwoLists(l1, l2);
    cout << "the merged list of 2 sorted list is as follows: " << endl;

    printList(merged);

    // clean up the memory(deallocate nodes)
    while (merged)
    {
        ListNode *temp = merged;
        merged = merged->next;
        delete temp;
    }

    delete l1;
    delete l2;

    return 0;
}