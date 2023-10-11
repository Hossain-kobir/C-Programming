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
    queue<pair<Node* ,int>>q;

    if(root) q.push({root,1});
    while (!q.empty())
    {
        
        pair<Node* ,int> pr =q.front();
        Node* node=pr.first;
        int level=pr.second;
        q.pop();
        //v.push_back(p->val);
    int x;
    cin>>x;

    if(x == pr.second)
    {
        cout<<node->val<<" ";
    }
        int l, r;
        cin>> l>>r;
        Node* left;
        Node* right;
        if(l == -1) left =NULL;
        else
        { 
        left = new Node(l);
        node->left=left;
        q.push({node->left,level+1});
        }
        if(r == -1) right = NULL;
                else
        { 
        right = new Node(r);
        node->right=right;
        q.push({node->right,level+1});
        }
        
    }
    return root;
}

// void level_order__print(Node* root)
// {
//         if (root == NULL)
//     {
//         cout << "Tree nai" << endl;
//         return;
//     }
//     stack<Node*>st;
//     queue <Node* >q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node* p=q.front();
//         q.pop();
//         st.push(p);

//        // cout<<p->val<<" ";

       
//        if(p->right)q.push(p->right);
//         if(p->left)q.push(p->left);
        
       
//     }
//     while (! st.empty())
//     {
//         Node*p=st.top();
//         st.pop();
//         cout<<p->val<<" ";
//     }

// }


int main()
{
    Node* root = level_order_input_tree();
    //level_order_input_tree();
   // cout<<sum_of_tree(root)<<endl;
    reverse(v.begin(),v.end());
    level_order__print(root);
    

    return 0;
}