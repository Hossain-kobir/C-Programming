#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node* &head, node* &tail, int val) {
    node* newNode = new node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

node print_reverse(node* head) {
    if (head == NULL)
        return;

    print_reverse(head->next);
    cout << head->val << " ";
    return print_reverse(head);
}

void find_mid(node* head) {
    node rev=print_reverse(head);
    node* mid=(rev+1)/2;
    node*tmp=head;
    for(int i=0;i<mid;i++)
    {
        tmp=tmp->next;
    }
    if(mid %2 ==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    else 
    {
        cout<<tmp->val<<endl;
    }
}

int size(node* head) {
    node* tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    cout << "Reversed List: ";
    print_reverse(head);
    cout << endl;

    int listSize = size(head);
    cout << "Size of the list: " << listSize << endl;

    find_mid(head);
    

    return 0;
}
