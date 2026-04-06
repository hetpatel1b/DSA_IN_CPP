#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    // Creating nodes
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // Linking nodes
    head->next = second;
    second->next = third;

    cout << "Introduction to Linked List" << endl;
    cout << "Linked List elements are:" << endl;

    printLinkedList(head);

    return 0;
}

// TC: O(n)
// SC: O(1)
