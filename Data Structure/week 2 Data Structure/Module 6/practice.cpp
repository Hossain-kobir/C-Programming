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

void insert_at_any_position(node* head, int pos, int v)
{
    node* newNode =new node(v);
    node *tmp=head;
    for(int i=1 ; i<pos-1; i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"invalid index"<<endl
                <<endl;
            return;
        }
    }
    newNode->next=tmp->next;//ata newnode=tm.next.next hobe na ata newnode.next=tmp.next hobe .
    tmp->next=newNode;

}

void print_linked_list(node *head)
{
    node * tmp=head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl
            <<endl<<"Your linked list :"<<endl
            <<endl;
    
}

void insert_at_head(node* &head,int v)
{
    node* newNode= new node(v);
   // node* tmp=head;
    newNode->next=head;
    head=newNode;
}

void delete_the_node(node* head , int pos)
{
    node*tmp=head;
    for(int i=1;i<pos-1;i++)
    {   
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"invalid index"<<endl
                <<endl;
                return;
        }
        
    }
    if(tmp->next==NULL)
    {
        cout<<"invalid index"<<endl
            <<endl;
    }
    node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}
void delete_head(node *&head)
{
    node*deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<endl
        <<"deleted head"<<endl
        <<endl;
}
int main()
{
    node* head=NULL;
   while (true)
   {
    cout<<"option 1 insert at tail"<<endl;//done
    cout<<"option 2 insert at any position"<<endl;
    cout<<"option 3 print linked list"<<endl;//done
    cout<<"option 4 insert at head"<<endl;//done
    cout<<"option 5 terminate the program"<<endl;//done
    cout<<"option 6 delete the node"<<endl;
    cout<<"option 7 delete the head"<<endl;//done
    int op;
    cin>>op;
    if(op==1)
    {
    int v;
    cin>>v;
    insert_at_tail(head ,v);
    }
    
    else if(op==2)
    {
        int pos,v;
        cout<<"Enter any Position";
        cin>>pos;
        cout<<"Enter your value";
        cin>>v;
        if(pos==0)
        {
            insert_at_head(head,v);
        }
        else {
        insert_at_any_position(head,pos,v);
        }
    }

    else if (op==3)
    {
        print_linked_list(head);
    }

    else if(op==4)
    {   
        int v;
        cin>>v;
        insert_at_head(head,v);
    }
        else if(op==5)
    {
        break;
    }
    else if(op==6)
    {
        int pos;
        cout<<"Enter Your Position"<<endl;
        cin>>pos;
        delete_the_node(head,pos);
    }
    else if(op==7)
    {
        delete_head(head);
    }
   }
   
    return 0;
}