#include <bits/stdc++.h>

using namespace std;

class Node 
{
    public:
    int val;
    Node *next;
    Node *prev;


    Node (int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
int main()
{
    Node *newNode = new Node(10);
    Node *newNode2 = new Node(10);

    Node *head = newNode;
    Node *tail = newNode;
    tail->next = newNode2;
    





    return 0;
}
