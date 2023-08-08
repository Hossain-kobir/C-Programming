#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b;
    cin>>b;
    //string:: iterator it;
    // for(int i=0;i<b.size();i++)
    // {
    //     cout<<b[i]<<endl;
    // }
    string:: iterator it;
    for(it=b.begin();it<b.end();it++)
    {
        cout<<*it<<endl;
    }
    // cout<<*b.begin()<<endl;
    // cout<<*(b.end()-1)<<endl;
    return 0;
}