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
node print_reverse(node *&head)
{   //int rev=size(head);
    node*tmp=head;
    if( tmp== NULL) return;
    print_reverse(tmp->next);
    cout<<tmp->val<<" ";
    return print_reverse;
    
}
void find_mid(node*head)
{

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
     node* head=NULL;
    node * tail=NULL;
    int val;
    while(true)
    {   cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    print_reverse(head);
    size(head);
    // cout<<endl;
    // print_orginal(head);
    return 0;
}