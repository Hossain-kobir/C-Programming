#include<bits/stdc++.h>
using namespace std;
class Node{
    public: int val;
            Node* left =NULL;
            Node* right =NULL;

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
    cin>> val;
    Node *root;
    if (val == -1) root =NULL;
    else root =new Node(val);

    queue<Node*>q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node * p =q.front();
        
        q.pop();

        int l, r;
        cin>>l >>r;
        Node * myleft;
        Node * myright;

        if(l == -1) myleft = NULL;
        else myleft = new Node(l);

        if(r == -1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
    }
    return root;
}
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        cout<<p->val<<" ";

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
}
int count_tree(Node * root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l= count_tree(root->left);
    int r= count_tree(root->right);

    return l+r+1;
}
int main()
{
    Node * root= input_tree();
    cout<<count_tree(root)<<endl;

    return 0;
}