#include<bits/stdc++.h>
using namespace std;
class node {
            public: int val;
                    node *next;

                    node (int val)
                    {
                        this->val=val;
                        this->next=NULL;
                    }
};
int main()
{
    list<int>ll;
    int ld;
    cin>>ld;
    while (true)
    {  
        if (ld == -1)
        {
            break;
        }
         
        ll.push_back(ld);
        cin>>ld;
        
    }
    ll.sort();

    ll.unique();

    for (int X : ll)
    {
        cout << X <<" ";
    }
    cout<<endl;
    return 0;
}