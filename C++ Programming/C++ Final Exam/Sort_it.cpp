#include<bits/stdc++.h>
using namespace std;
class students{
        public:
                string nm;
                int cls;
                char s;
                int id;
                int math_marks;
                int eng_marks;

};
    bool cmp(students a ,students b)
    {
        
        int total_marks_a = a.math_marks + a.eng_marks;
        int total_marks_b = b.math_marks + b.eng_marks;
        if(total_marks_a == total_marks_b)
        {
            return a.id < b.id;
        } 
        else
        { 
            return total_marks_a > total_marks_b;
        }
    }
int main()
{
    int n;
    cin>>n;
    students a[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        
    }

    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}