#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n/2 &&j==n/2)
            {
                cout<<"X";
            }
            if(j==i)
            {
                if(j==n/2)
                {
                    continue;
                }
                cout<<"\\";
            }
            //n-1-i
            //3-1-0=2
            //3-1-1=1
            //3-1-2=0
            if(j==n-1-i)  
            {
                if(j==n/2)
                {
                    continue;
                }
                cout<<"/";
            }
               if(j!=i &&j!=n-1-i)
            {
            cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}