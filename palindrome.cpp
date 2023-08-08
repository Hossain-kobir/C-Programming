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
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse(node *&head, node *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool is_palindrome(node* head)
    {    

        node*newhead=NULL;
        node* newtail=NULL;
        node* tmp=head;
        while (tmp != NULL)
        {
            insert_at_tail(newhead,newtail,tmp->val);
            tmp=tmp->next;
        }
        if(head->next==NULL) return true;
        reverse(newhead,newhead);
        tmp=head;
       node* tmp2=newhead;
       while(tmp != NULL)
       {
       if(tmp->val != tmp2->val)
       {
            return false;
       }
       tmp=tmp->next;
       tmp2=tmp2->next;
       }
       return true;
    }
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int value;
    cin >> value;
    while (value != -1)
    {
        insert_at_tail(head, tail, value);
        cin >> value;
    }
    //is_palindrome(head);
    if(is_palindrome (head)== true)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    // cout << (is_plaindrome(head, revarse_head) ? "YES" : "NO");

    // cout << (is_palindrome(head) ? "YES" : "NO") << endl;
    return 0;
}