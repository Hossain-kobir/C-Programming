#include <bits/stdc++.h>
using namespace std;
class Node{
    public: int val;
            Node *left;
            Node *right;
        Node(int val)
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        } 
};
void postorder(Node* root)
{
    if(root ==NULL)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
    
    
}
int main()
{
    Node* root= new Node(10);
    Node*a= new Node(20);
    Node*b= new Node(30);
    Node*c= new Node(40);
    Node*d= new Node(50);
    Node*e= new Node(70);
    Node*f= new Node(80);
    Node*g= new Node(90);
    Node*h= new Node(60);
    Node*i= new Node(2000);
    Node*j= new Node(100);

    //connection
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=d;
    c->left=e;
    c->right=f;
    f->right=i;
    b->left=g;
    g->left=j;
    b->right=h;

    postorder( root);
    return 0;
}