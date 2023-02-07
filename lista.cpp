#include <iostream>
using namespace std;
 
// A Linked List Node
class Node
{
  public:
    int key;        // data field
    Node* next;     // pointer to the next node
};
 
// Utility function to return new linked list node from the heap
Node* newNode(int key)
{
    // allocate a new node in a heap and set its data
    Node* node = new Node;
    node->key = key;
 
    // `.next` pointer of the new node points to nothing
    node->next = nullptr;
 
    return node;
}
 
// Function for linked list implementation containing three nodes
Node* constructList()
{
    // construct three linked list nodes
    Node* first = newNode(1);
    Node* second = newNode(2);
    Node* third = newNode(3);
 
    // rearrange the pointers to construct a list
    Node* head = first;
    first->next = second;
    second->next = third;
 
    // return a pointer to the first node in the list
    return head;
}
 
// Helper function to print a linked list
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        cout << ptr->key << " -> ";
        ptr = ptr->next;
    }
 
    cout << "nullptr";
}
 
int main()
{
    // `head` points to the first node (also known as a head node) of a linked list
    Node *head = constructList();
 
    // print linked list
    printList(head);
 
    return 0;
}