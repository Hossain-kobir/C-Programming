#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(v[i+1]>v[i])
            {
                flag =1;
                break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }

    return 0;
}