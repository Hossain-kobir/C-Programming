#include<bits/stdc++.h>
using namespace std;
class node{
        public: int val;
                node* next;

                node(int val)
                {
                    this->val=val;
                    this->next=NULL;
                }
};

void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newNode=new node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else{
    tail->next = newNode;
    tail = newNode;
    }
}

// void insert_at_tail(node *&head, int v)
// {
//     node *newNode = new node( v);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
//     //tmp=newNode;
// }
void print_orginal(node* n)
{   
    if( n== NULL) return;
    cout<<n->val<<" ";
    print_orginal(n->next);
}
void print_reverse(node* n)
{   
    if( n== NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
    
}
int main()
{
    node* head=NULL;
    node * tail=NULL;
    int val;
    while(true)
    {   cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    print_reverse(head);
    
    cout<<endl;
    print_orginal(head);
    return 0;
}