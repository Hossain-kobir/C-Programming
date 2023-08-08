#include<bits/stdc++.h>
using namespace std;
class node {
            public: int val;
                    node *next;

                    node (int val)
                    {
                        this->val=val;
                        this->next=NULL;
                    }
};
void print_linked_list(node * head)
{
    node*tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" "; 
        tmp=tmp->next; 
    }
}

int main()
{
    node* head =new node(10);
    node* a =new node(20);
    node* b =new node(30);
    node* c =new node(40);
    node* d =new node(50);
    node* e =new node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_linked_list(head);

    cout<<endl;

    print_linked_list(head);
    
    
    
    return 0;
}