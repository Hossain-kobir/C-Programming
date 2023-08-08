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
void insert(node *head ,int pos,int val)
{   node *newNode=new node(val);
    node* tmp=head;
    for (int i=1;i<=pos-1;i++)
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

    while (true)
    {
    int pos,val;
    cin>>pos>>val;
    

    if(pos> size(head))
    {
        cout<<"invalid index"<<endl
                    <<endl;

    }
    else 
        {
            insert(head,pos,val);
        }

    print_linked_list(head);
    }
    
    
    return 0;
}