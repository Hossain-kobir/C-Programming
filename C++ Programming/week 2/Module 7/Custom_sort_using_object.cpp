#include<bits/stdc++.h>
using namespace std;
class Person{
        public:
            string name;
            int age;
            int marks;
};
int main()
{   Person a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].age>>a[i].marks;
        cin.ignore();
    }
    
        for(int i=0;i<3-1;i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(a[i].marks<a[j].marks)
            {
                swap(a[i],a[j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].marks<<" "<<endl;
    }
    
    return 0;
}