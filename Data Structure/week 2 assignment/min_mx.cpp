#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};



void find_max_min(Node* head, int* & mx, int* & min)
{
    *mx = INT_MIN;
    *min = INT_MAX;
    for (Node* i=head; i!=NULL; i=i->next)
    {
        if (i->val >*mx)
        {
            *mx = i->val;
        }
        if (i->val <*min)
        {
            *min = i->val;
        }
    }
    
}

void insert_head_tail(Node* &head,int v)
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
int main()
{
    Node *head = NULL;
    int val;

    cin >> val;
    while (val != -1)
    {
        insert_head_tail(head,val);
        cin >> val;
    }


    int max_val, min_val; //
    int *mx = &max_val;     //
    int *min = &min_val;    //
    find_max_min(head, mx, min);

    cout << mx <<" "<< min << endl;

    return 0;
}