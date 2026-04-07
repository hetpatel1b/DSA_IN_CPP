#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main()
{
    Node* n1=new Node(10);
    Node* n2=new Node(20);
    Node* n3=new Node(30);
    n1->next=n2;
    n2->next=n3;
    Node* head=n1;




    return 0;
}