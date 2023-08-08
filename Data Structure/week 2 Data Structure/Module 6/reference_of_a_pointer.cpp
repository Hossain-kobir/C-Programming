#include<bits/stdc++.h>
using namespace std;
class node{
            int val;
            node*next;
        node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void fun(int * &p)
{
    p=NULL;
    cout<<&p<<endl;
};
int main()
{
    int val=30;
    int *ptr=&val; 
    fun(ptr); //fun(&val);
    cout<<&ptr<<endl;
    return 0;
}