#include<bits/stdc++.h>
using namespace std;
class node{
    public: int val;
            node *next;
        node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void find_maximum_minmum(node*head,int *mx,int *min)
{
    *mx=INT_MIN;
    *min=INT_MAX;

    for(node *i=head;i->next !=NULL; i=i->next)
    {
        if(i->val>*mx)
        {
            mx=i->val;
        }
        if(i->val<*min)
        {
            min=i->val;
        }
    }
}

void insert_at_tail(node* &head ,int v)
{
    node *newNode=new node(v);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    node *tmp=head;
    while (tmp->next!= NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}

int main()
{
    node*head=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val = -1) break;
        insert_at_tail(head,val);
    }
    int mx,min;
    
    find_maximum_minmum(head,&mx,&min);
    return 0;
}