#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(node *&head, int v)
{
    node *newNode = new node( v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    //tmp=newNode;
}
void print_linked_list(node *head)
{
    node* tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
int main()
{
    node *head = NULL;
   while (true)
   {
     cout << "option 1 insert at tail"<<endl;
     cout<< " option 2 print Linked List"<<endl;
     cout<<" option 3 Break"<<endl;

    int op;
    cin >> op;
    if (op == 1)
    {
        int v;
        cin >> v;
        insert_at_tail(head, v);
    }
    else if(op==2)
    {
        print_linked_list(head);
    }

    else if ( op==3 )
    {
        break;
    }
    
   }
    return 0;
}