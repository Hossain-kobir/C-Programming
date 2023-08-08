#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,1,2,33,7,8,1};
    replace(v.begin(),v.end()-1,1,888);
    // for(int x:v) 
    // {
    //     cout<<x<<endl; 
    // }

    // Find part start use same initilize part :
    vector<int>:: iterator it ;
    it= find(v.begin(),v.end(),100);

    // je kno akta use kora jabe (13-14 line or only 17 line )
    
    // auto it = find (v.begin(),v.end(),33); 
    //cout<< *it<<" ";
    if(it == v.end()) cout<<"Not Found";
    else cout << " Found ";
    return 0;
}