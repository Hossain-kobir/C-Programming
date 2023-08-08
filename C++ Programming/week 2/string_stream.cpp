#include<bits/stdc++.h>
using namespace std;
int main()
{
    string k;
    getline(cin,k);
    stringstream ss;
    ss<<k;
    string word;
    // ss>>word;
    // cout<<word<<endl;
    while(ss>>word)
    {
        cout<<word<<endl;
    }
    return 0;
}