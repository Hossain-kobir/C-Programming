#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v; Type 1
    // vector<int>v(99); Type 2;
    // vector <int> v(5,10);Type 3
    // vector<int>v={1,34,45,56,78};
    // vector<int>v2;
    // Type 3.5
    // v2=v;

    // vector <int>v2(5,22);
    // vector <int>v(v2); type 4
    int a[6]={1,3,3,5,9,78};
    vector<int>v={3,4};
    vector<int>v1(a,a+6);
    
    for(int i=0; i<v.size (); i++)
    {
       cout<<v[i]<<endl;
    }
    cout<<"Size = "<< v.size()<<endl;
    return 0;
}