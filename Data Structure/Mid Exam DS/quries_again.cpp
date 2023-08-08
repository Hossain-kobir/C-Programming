#include<bits/stdc++.h>
using namespace std;
class Node{
            public:
            int val;
            Node* next;
            Node * prev;
    
    Node(int v)
    {
        this->val=v;
        this->next=NULL;
        this->prev=NULL;
    }
};
    void insert_at_any_position(Node * &head, int x, int val)
    {
        Node * newNode= new Node(val);
        // if (head == NULL)
        // {
        //     tail= newNode;
        //     head=newNode;
        //     return;
        // }
        Node* tmp= head;
        for (int i=0; i<x-1; i++)
        {
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
        tmp->next->next->prev=newNode;
        newNode->prev=tmp;
    }
    void insert_at_head(Node* &head, Node* &tail, int val)
    {
        Node *newNode= new Node(val);
        if(head == NULL)
        {
            head =newNode ;
            tail = newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head = newNode;
        head->prev=NULL;
    }
    void insert_at_tail(Node *&head, Node *&tail, int val)
    {
        Node* newNode=new Node(val);
        if(head == NULL)
        {
            head =newNode;
            tail= newNode;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail= newNode;
    }
    
    int size(Node*head)
    {   Node *tmp= head;
        int cnt=0;
        while(tmp!=NULL)
        {
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }

void print_linked_list_l_t_r(Node* head)
{
    Node* tmp=head;
    cout<<"L -> ";
    while (tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void print_linked_list_r_t_l(Node* tail)
{
    Node* tmp=tail;
    cout<<"R -> ";
     while (tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail= NULL;
    int q;
    cin>>q;
    while(q--)
    {   int x,v;
        cin>>x>>v;
        if ( v == -1) break;
        if( x == 0 )
        {
            insert_at_head(head,tail,v);
        }
        else if(x == size(head))
        {
            insert_at_tail(head,tail,v);
        }
        else if(x>size(head))
        {
            cout<<"invalid index"<<endl;
            continue;
        }
        else 
        {
            insert_at_any_position(head,x,v);
        }
        
        print_linked_list_l_t_r(head);
        print_linked_list_r_t_l(tail);
    } 

return 0;
}