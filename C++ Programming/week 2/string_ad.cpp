#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b="Hossain";
    string c="Kobir";
    b+=c;
    cout<<b<<endl;
    cout<<c<<endl;
    b.append(c);
    cout<<b<<endl;
    cout<<c<<endl;
    b.push_back('s');
    cout<<b<<endl;
    b.pop_back();
    b.pop_back();
    b.pop_back();
    cout<<b<<endl;
    return 0; 
}
