// ** add two numbers represented as linked list and reverse the sum and show in linked list.

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int x) : data(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode dummy(0);
        ListNode *curr = &dummy;
        int carry = 0;

        while (l1 || l2 || carry)
        {
            int sum = (l1 ? l1->data : 0) + (l2 ? l2->data : 0) + carry;
            carry = sum / 10;
            int digit = sum % 10;

            curr->next = new ListNode(digit);
            curr = curr->next;

            // Move to the next nodes if they exist
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return dummy.next;
    }
};

ListNode *createlistFromArray(int arr[], int size)
{
    ListNode dummy(0);
    ListNode *curr = &dummy;
    for (int i = 0; i < size; i++)
    {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return dummy.next;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};

    ListNode *l1 = createlistFromArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
    ListNode *l2 = createlistFromArray(arr2, sizeof(arr2) / sizeof(arr2[0]));

    Solution solution;
    ListNode *result = solution.addTwoNumbers(l1, l2);

    cout << "sum of two numbers" << endl;
    printList(result);

    return 0;
}