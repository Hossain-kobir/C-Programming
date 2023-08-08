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
        cout<<tmp->val<<endl;
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
int main()
{
    node *head=NULL;
    while(true)
    {
    cout<<"optiion 1 insert at tail"<<endl;
    cout<<"option 2 print Linklist "<<endl;
    cout<<"option 3 insert at any position "<<endl;
    cout<<"option 4 terminate the program"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }

            if(op==2)
        {
            print_linked_list(head);
        
        }
        
    if (op == 3)
    {
        int pos,v;
        cout<<" Enter Position"<<endl;
        cin>>pos;
        cout<<"enter a value "<<endl;
        cin>>v;
        insert_at_any_position(head ,pos,v);

    }

        if(op==4)
        {
            break;
        }
    }
    return 0;
}