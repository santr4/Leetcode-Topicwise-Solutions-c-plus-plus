// /****************************************************************

//     Following is the class structure of the Node class:

//     template <typename T>
//     class Node
//     {
//     public:
//         T data;
//         Node<T> *next;
//         Node()
//         {
//             this->data = 0;
//             this->next = NULL;
//         }
//         Node(T data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//         Node(T data, T* next)
//         {
//             this->data = data;
//             this->next = next;
//         }
//     };

// *****************************************************************/

// int searchInLinkedList(Node<int> *head, int k) {
//     // Write your code here.
//     Node<int> *temp = head;
//     int flag = 0;
//     while(temp != nullptr){
//         if(temp->data == k){
//             flag = 1;
//             break;
//         }
//         temp = temp->next;
//     }
//     return flag;
// }