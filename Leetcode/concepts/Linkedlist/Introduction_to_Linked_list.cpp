// ** to create a linked list from a given array.
// ** arr[] = {1,2,3,4};
// ** 1->2->3->4

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(Node **root, int item)
{
    Node *temp = new Node;
    Node *ptr;
    temp->data = item;
    temp->next = NULL;
    if (*root == NULL)
    {
        *root = temp;
    }
    else
    {
        ptr = *root;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display(Node *root)
{
    while (root != NULL)
    {
        cout << root->data << "->";
        root = root->next;
    }
    cout << "NULL" << endl;
}

Node *arraytoList(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        insert(&root, arr[i]);
    }
    return root;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = arraytoList(arr, n);
    display(root);
    return 0;
}