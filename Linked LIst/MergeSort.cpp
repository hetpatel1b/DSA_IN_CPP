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
    Node *merge(Node *left, Node *right)
    {
        List ans;
        Node *i = left;
        Node *j = right;

        while (i != NULL && j != NULL)
        {
            if (i->data <= j->data)
            {
                ans.push_back(i->data);
                i = i->next;
            }
            else
            {
                ans.push_back(j->data);
                j = j->next;
            }
        }
        while (i != NULL)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        while (j != NULL)
        {
            ans.push_back(j->data);
            j = j->next;
        }

        return ans.head;
    }

    Node *splitatmid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = head;

        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL)
        {
            prev->next = NULL;
        }

        return slow;
    }

    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *righthand = splitatmid(head);
        Node *left = mergeSort(head);
        Node *right = mergeSort(righthand);

        return merge(left, right);
    }

    void printList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "Null" << endl;
    }
};

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(5);
    ll.push_front(1);

    ll.printList();

    ll.head = ll.mergeSort(ll.head);

    ll.printList();
    return 0;
}