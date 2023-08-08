#include<bits/stdc++.h>
using namespace std;
void cap(char n)
{
    if(n>='0' && n<='9')
    {
        cout<<"IS DIGIT";
    }
    if(n>='A' && n<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
        if(n>='a' && n<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
}
int main()
{
    char n;
    cin>>n;
    cap(n);
    return 0;
}
