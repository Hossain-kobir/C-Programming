#include<bits/stdc++.h>
using namespace std;
class Person
{       public:
            string name;
            int    age ;
            float heaight;
            int marks1;
            int marks2;

            Person(string nm, int ag, float hi,int m1,int m2)
            {
                name=nm;
                age=ag;
                heaight=hi;
                marks1=m1;
                marks2=m2;

            }
            void helo()
            {
                cout<<name<<endl<<age<<endl<<heaight<<endl;
            }
            int total_marks()
            {
                return marks1+marks2;
            }
};
int main()
{
        int n;
    cin>>n;
    students a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm;
        cin>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        
    }
    for (int  i = 0; i < n; i++)
    {
        
    }
    
    // Person kabir("Hossain Kobir",20,5.9,80,85);
    // Person hk("Kobir Hossain",22,10.9,70,89);
    // kabir.helo();
    // hk.helo();
    // cout<<kabir.total_marks()<<endl;
    // cout<<hk.total_marks()<<endl;
    return 0;
}