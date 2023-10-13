#include<bits/stdc++.h>
using namespace std;
class Node{
    public: int val;
            Node* left;
            Node* right;
        Node(int val)
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val== -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* p= q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        
        if(l==-1)left=NULL;
        else left= new Node(l);

        if(r==-1) right=NULL;
        else right = new Node(r);

        p->left=left;
        p->right=right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}


bool search_bst(Node* root,int x)
{
    if(root == NULL) return false;
    if(root->val== x) return true;

    if(x<root->val)
    {
        bool l= (root->left,x);
        if(l == true) return true;
        else{
            return false;
        }
    }
    else if(x >root->val)
    {
        bool r =(root->right);
        if(r== true) return true;
        else {
            return true;
        }
    }
}

void levelorder_print(Node * root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node *f= q.front();
        q.pop();
        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

}

int main()
{   Node * root = input_tree();
    int x;
    cin>>x;
   search_bst(root,x);
  // levelorder_print(root);
if(search_bst(root, 100)) cout<<"Yes, Fournd";
else cout<<"Not Found";
    return 0;
}