#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string webadress;
    Node *next;
    Node *prev;

    Node(string webadress)
    {
        this->webadress = webadress;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node *&head, Node *&tail, string &webadress)
{
    Node *newNode = new Node(webadress);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void find(Node *head, Node *& cur, string ss)
{
    Node *tmp = head;
    string sf;
    if (ss == "visit")
    {
        cin >> sf;
        // Node *tmp = head;
        while (tmp != NULL)
        {

            if (sf == tmp->webadress)
            {
                cout << tmp->webadress<<endl;
                cur=tmp;
                break;
            }
            tmp = tmp->next;
            
        }

        if (tmp == NULL )
        {
            cout <<"Not Available"<<endl;
        }
        
    }
    
    else if(ss == "next"&& cur->next != NULL)
    {
        cur=cur->next;
        cout<<cur->webadress<<endl;
    }
    else if(ss == "prev" && cur->prev != NULL)
    {
        cur=cur->prev;
        cout<<cur->webadress<<endl;
    }
    else {
        cout<<"Not Available"<<endl;
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur=head;
    string webadress;
    cin >> webadress;
    while (webadress != "end")
    {

        insert(head, tail, webadress);
        cin >> webadress;
    }
    // print input logic
    // Node* tmp=head;
    // while(tmp != NULL)
    // {
    //     cout<<head->webadress;
    //     head=head->next;
    // }
    int q;
    cin >> q;
    string ss;
    while (q--)
    {
        cin >> ss;
        find(head, tail, ss);
    }

    return 0;
}