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
vector<int> v;
Node* level_order_input_tree()
{
    int val;
    cin>>val;
    Node*root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node* >q;
    if(root) q.push(root);
    while (!q.empty())
    {
        
        Node* p =q.front();
        q.pop();
        v.push_back(p->val);

        int l, r;
        cin>> l>>r;
        Node* left;
        Node* right;
        if(l == -1) left =NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left= left;
        p->right= right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
        
    }
    return root;
}

void level_order__print(Node* root)
{
        if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    stack<Node*>st;
    queue <Node* >q;
    q.push(root);
    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();
        st.push(p);

       // cout<<p->val<<" ";

       
       if(p->right)q.push(p->right);
        if(p->left)q.push(p->left);
        
       
    }
    while (! st.empty())
    {
        Node*p=st.top();
        st.pop();
        cout<<p->val<<" ";
    }

}


int main()
{
    Node* root = level_order_input_tree();
    //level_order_input_tree();
   // cout<<sum_of_tree(root)<<endl;
    reverse(v.begin(),v.end());
    level_order__print(root);
    

    return 0;
}