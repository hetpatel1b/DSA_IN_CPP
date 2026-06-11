#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};

class DoublyList
{
public:
    Node *head;
    Node *tail;

    DoublyList()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp=temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyList dl;

    dl.push_front(4);
    dl.push_front(3);
    dl.push_front(2);
    dl.push_front(1);

    dl.printList();
    return 0;
}