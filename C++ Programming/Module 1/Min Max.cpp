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
    node* head1=NULL;
    node*tail1=NULL;

    node* head2=NULL;
    node*tail2=NULL;
    int val;
    
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head1,tail1,val);
    }

    //     while(true)
    // {
    //     cin>>val;
    //     if(val == -1) 
    //     break;
    //     insert_at_tail(head2,tail2,val);
    // }


    return 0;
}