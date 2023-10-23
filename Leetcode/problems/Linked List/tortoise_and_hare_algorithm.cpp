// ** tortoise and hare algorithm or fast and slow pointer approach to find the middle element of the linked list.

#include <bits/stdc++.h>
using namespace std;

// Define ListNode Structure
struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int val) : data(val), next(nullptr) {}
};

// Function to find the middle element of the linked list
ListNode *findMiddle(ListNode *head)
{
    if (!head)
    {
        return nullptr;
    }

    ListNode *fast = head;
    ListNode *slow = head;

    // Move slow ptr one step at a time and fast ptr two steps at a time.
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    // create a simple linked list
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *middle = findMiddle(head);

    if (middle)
    {
        cout << "the middle element of the linked list is: " << middle->data << endl;
    }
    else
    {
        cout << "the linked list is empty" << endl;
    }

    // clean up the memory(deallocate the Nodes)
    while (head)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}