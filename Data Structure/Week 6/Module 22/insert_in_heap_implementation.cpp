#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    int cur_idx=v.size()-1;
    while(cur_idx != 0)
    {
    int pr_idx=(cur_idx -1)/2;
    if(v[cur_idx]>v[pr_idx])
    swap(v[cur_idx],v[pr_idx]);

    else 
        break;
    cur_idx=pr_idx;
    }
    }
    return 0;
}