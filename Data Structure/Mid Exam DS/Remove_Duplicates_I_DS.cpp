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
    cout<<endl;
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

 node *sort(node* head)
{
    if (head == NULL) return head;
    
    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    return head;
}
node *remove_duplicate(node* head)
{
    if (head == NULL) return head;

    for (node *i =head; i !=NULL; i =i->next)
    {   node *temp =i;
        while (temp->next !=NULL)
        {
            if (temp->next->val == i->val)
            {
                node *delete_Node =temp->next;
                temp->next =temp->next->next;
                delete delete_Node;
            }

            else
            {
                temp = temp->next;
            }
        }
    }
    return head;
}

int main()
{
    node* head=NULL;
    node*tail=NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    print_linked_list(head);
    sort(head);
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}