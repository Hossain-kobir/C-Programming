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
void insert_at_tail(node * &head ,int v)
{
    node* newNode=new node(v);

    if(head == NULL)
    {
        head =newNode;
        return;
    }

    node * tmp =head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_linked_list(node* head)
{
    node *tmp =head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_at_any_position(node*head , int pos ,int v)
{
    node* newNode=new node(v);
    node*tmp=head;
    for(int i=0; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next; 
    tmp->next=newNode;
}
void insert_at_head(node *& head,int v)
{
    node* newNode =new node(v);

    newNode->next=head;
    head=newNode;
}
void delete_node(node* head,int pos)
{
    node*tmp=head;
    for(int i=1; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}
int main()
{
    node *head=NULL;
    while(true)
    {
    cout<<"optiion 1 insert at tail"<<endl;
    cout<<"option 2 print Linklist "<<endl;
    cout<<"option 3 insert at any position "<<endl;
    cout<<"option 4 insert at head"<<endl;
    cout<<"option 5 delete node"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }

    else if(op==2)
        {
            print_linked_list(head);
        
        }
        
    else if (op == 3)
    {
        int pos,v;
        cout<<"Enter Position"<<endl;
        cin>>pos;
        cout<<"Enter a value "<<endl;
        cin>>v;
        if(pos==0)
        {
            insert_at_head(head,v);
        }
        else{
        insert_at_any_position(head ,pos,v);
        }

    }

    else if(op==4)
        {
            cout<<"Enter Your Head";
            int v;
            cin>>v;
            insert_at_head(head, v);
        }
    
    else if(op==5)
    {
        int pos;
        cin>>pos;
        delete_node(head,pos);
    }
    }
    return 0;
}