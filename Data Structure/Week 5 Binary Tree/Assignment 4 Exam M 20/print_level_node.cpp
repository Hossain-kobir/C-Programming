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
    void input_tree()
    {
        int val;
        cin>>val;
        Node* root;
        if(val == -1)root = NULL;
        else root == new Node(val);
        queue<pair<Node* ,int>>q;
        if(root) q.push({root,0});
        while(!q.empty())
        {
            pair<Node* ,int> pr= q.front();
            Node* node= pr.first;
            int level =pr.second;
            q.pop();
            
            int l,r;
            cin>>l,r;
            Node*left;
            Node* right;
            if(l== -1) left= NULL;
            else{
                left= new Node(l);
                node->left=left;
                q.push({node->left,level+1});
            }

            if(r== -1) left= NULL;
            else{
                left= new Node(l);
                node->right=right;
                q.push({node->right,level+1});
            }
        }
        return root;
    }
int main()
{
     input_tree();
    return 0;
}