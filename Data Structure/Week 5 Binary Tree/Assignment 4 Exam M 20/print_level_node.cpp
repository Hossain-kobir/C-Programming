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
    void print_level_order(Node* root,int x)
    {   if(root == NULL) return ;
        bool find = false;
        queue<pair<Node* ,int>>q;
        q.push({root,0});
        while (!q.empty())
        {
            pair<Node*,int> pr=q.front();
            Node* node= pr.first;
            int level = pr.second;
            q.pop();
            if(level == x)
            {
                cout<<node->val<<" ";
                find= true;
            }
            if(node->left)q.push({node->left,level+1});
            if(node->right)q.push({node->right,level+1});
        }
        if(!find)cout<<"Invalid";
    }
    Node * input_tree()
    {
        int val;
        cin>>val;
        Node* root;
        if(val == -1)root = NULL;
        else root = new Node(val);
        queue<pair<Node* ,int>>q;
        if(root) q.push({root,0});
        while(!q.empty())
        {
            pair<Node* ,int> pr = q.front();
            Node* node= pr.first;
            int level =pr.second;
            q.pop();
            
            int l,r;
            cin>>l>>r;
            Node*left;
            Node* right;
            if(l== -1) left= NULL;
            else{
                left= new Node(l);
                node->left=left;
                q.push({node->left,level+1});
            }

            if(r == -1) right= NULL;
            else{
                right= new Node(r);
                node->right=right;
                q.push({node->right,level+1});
            }
        }
        return root;
    }
int main()
{
    int x; 
    Node* root= input_tree();
    cin>>x;
    print_level_order(root, x);
    return 0;
}