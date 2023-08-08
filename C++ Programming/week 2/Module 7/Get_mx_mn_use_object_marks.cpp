#include<bits/stdc++.h>
using namespace std;
class Student {
      public:
        string name ;
        int roll;
        int clas;
        float heaight;
};
int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].clas>>a[i].roll>>a[i].heaight;
        cin.ignore();
    }
    Student mx;
    mx.roll=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(a[i].roll> mx.roll)
        {   
            mx=a[i];
        }

    }
    cout<<mx.name<<endl<<mx.clas<<endl<<mx.roll<<endl<<mx.heaight<<endl;
    return 0;
}