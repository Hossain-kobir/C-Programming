// Problem Statement

// You need to take a singly linked list of integer value as input and print the maximum and minimum value of the singly linked list.

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// Input will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output the maximum value then the minimum value.


#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void input(Node* &head,int v)
{
    Node *newNode = new Node(v);
    if (head == NULL) 
    {
        head = newNode;
    }
    
    else
    {
        Node* temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    } 

}

void max_min(Node* head, int* max_value, int* min_value)
{
    *max_value = INT_MIN;
    *min_value = INT_MAX;
    for (Node* i = head; i != NULL; i = i->next)
    {
        if (i->value > *max_value)
        {
            *max_value = i->value;
        }
        if (i->value < *min_value)
        {
            *min_value = i->value;
        }
    }
    
}


int main()
{
    Node *head = NULL;
    int value;

    cin >> value;
    while (value != -1)
    {
        input(head,value);
        cin >> value;
    }

    int max_value, min_value;
    
    max_min(head, &max_value, &min_value);

    cout << max_value << " " << min_value << endl;

    return 0;
}