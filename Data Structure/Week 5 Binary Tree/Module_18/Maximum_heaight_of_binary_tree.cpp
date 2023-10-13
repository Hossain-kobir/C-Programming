#include<bits/stdc++.h>
using namespace std;
class Node{
    public: int val;
            Node *left;
            Node *right;
        Node(int val)
        {
            this->val= val;
            this->left= NULL;
            this->right= NULL;
        }
    
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root =NULL;
    else root = new Node(val);

    queue<Node* > q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l== -1) left =NULL;
        else left=new Node(l);

        if(r== -1) right =NULL;
        else right = new Node(l);

        p->left=left;
        p->right=right;

        if(p->left)q.push(left);
        if(p->right)q.push(right);

    }
    return root;
}
int count_node(Node *root)
{
    if(root == NULL) return 0;
    int l= count_node(root->left);
    int r= count_node(root->right);
    return l+r+1;
}
int count_leaf(Node* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    else {
        int l= count_leaf(root->left);
        int r= count_leaf(root->right);
        return l+r;
    }
}

int maximum_heaight(Node* root)
{
    if(root == NULL) return 0;
    


    int l = maximum_heaight(root->left);
    int r = maximum_heaight(root->right);
    return max(l,r)+1;
}
int main()
{
    Node * root = input_tree();
    cout<<"count Node = "<<count_node(root);
    cout<<"count leaf = "<<count_leaf(root);
    cout<<"count Tree Heaght= "<<maximum_heaight(root);
    return 0;
}