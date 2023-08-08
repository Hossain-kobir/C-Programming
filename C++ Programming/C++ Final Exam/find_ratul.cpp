#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss << s;
    string chk = "Ratul";
    string word;
    int flag=0;
    while(ss >> word)
    {   // cout<<word<<endl;

         if( word == chk )
        {
           flag =1;
        }
        
    }

    if(flag==1)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
        
    return 0;
}