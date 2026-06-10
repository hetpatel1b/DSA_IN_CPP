#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
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
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    bool isCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                cout << "Cycle Exists" << endl;
                return true;
            }
        }
        cout << "Cycle Not Exists" << endl;
        return false;
    }

    void removeCycle()
    {
        Node *slow = head;
        Node *fast = head;
        bool isCycle = false;
        while (fast != NULL & fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                cout << "Cylce Exist" << endl;
                isCycle = true;
                break;
            }
        }

        if (!isCycle)
        {
            cout << "Cylce Does Not Exist" << endl;
        }

        slow = head;
        if (slow == fast)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            Node *prev = fast;
            while (slow != fast)
            {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL;
        }
    }

    void printList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "Null";
    }
};

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next = ll.head;

    ll.removeCycle();
    ll.printList();
    return 0;
}