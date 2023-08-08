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
void insert_any_position(node *head ,int pos,int val)
{   node *newNode=new node(val);
    node* tmp=head;
    for (int i=0;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
int size(node* head)
{
    node* tmp=head;
    int cnt=0;
    while (tmp != NULL)
    {
        cnt++;
        tmp =tmp->next;

    }
    return cnt;
}
void insert_head(node* &head,int val)
{
    node* newNode=new node(val);
    newNode->next=head;
    head=newNode;
}
void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newNode=new node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    node* head =new node(10);
    node* a =new node(20);
    node* b =new node(30);
    node* c =new node(40);
    node* d =new node(50);
    node* e =new node(60);
    node*tail=e;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_linked_list(head);

    while (true)
    {
    int pos,val;
    cin>>pos>>val;
    
    if(pos>size(head))
    {
        cout<<"invalid index" <<endl;
    }

    else if(pos == 0)
    {
        insert_head(head ,val);
    }

    else if(pos == size(head))
    {
        insert_at_tail(head,tail,val);
    }
    
     else
         {
            insert_any_position(head,pos,val);
         }
    print_linked_list(head);
    }
    
    return 0;
}