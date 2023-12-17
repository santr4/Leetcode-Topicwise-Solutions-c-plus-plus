// ** Remove nth node from the last in linked list.

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    struct ListNode *next;
    ListNode(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

// function to calculate the number of nodes in the linked list.
int length(ListNode *head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void printList(ListNode *head)
{
    ListNode *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

ListNode *remove_nth_node(ListNode *head, int n)
{
    int l = length(head);
    int NodefromBeginning = l - n + 1;
    ListNode *prev = NULL;
    ListNode *temp = head;
    for (int i = 1; i < NodefromBeginning; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL)
    {
        head = head->next;
        return head;
    }
    else
    {
        prev->next = prev->next->next;
        return head;
    }
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "linked list before deletion" << endl;
    printList(head);

    head = remove_nth_node(head, 4);

    cout << "linked list after deletion" << endl;
    printList(head);

    return 0;
}