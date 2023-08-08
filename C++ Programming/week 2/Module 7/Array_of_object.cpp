#include<bits/stdc++.h>
using namespace std;
class Student {
            public: 
            string name;
            int roll;
            float heaight ;

};
int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);

        cin>>a[i].roll>>a[i].heaight;
        cin.ignore();
    }
        for(int i=0;i<3;i++)
    {
       cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].heaight<<endl;
    }
    return 0;
}