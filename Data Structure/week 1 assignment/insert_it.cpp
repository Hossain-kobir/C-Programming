#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<long long int>a(n);
    vector<long long int>b(m);
    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
    }
        for(long long int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    long long int x;
        for(long long int j=0; j<m; j++)
    {
        replace(a.begin()+x,a.end(),a[j+x],b[j]);
    }
    for(long long int i =0; i<a.size(); i++)
    {
        cout<<a[i];
    }
    return 0;
}