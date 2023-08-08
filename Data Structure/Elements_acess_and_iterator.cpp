#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>x={1,2,3,4,5,6};

    // Elements Acess in vector
    //     cout<<" "<<x.front();
    //     cout<<" "<<x.back();
    //     cout<<" "<< x.size()-1<<endl;

    // cout<<" size = "<< x.size()<<endl;

    vector< int > :: iterator  it;
    for(it=x.begin(); it<x.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}