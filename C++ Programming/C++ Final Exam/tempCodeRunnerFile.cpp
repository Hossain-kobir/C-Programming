#include<bits/stdc++.h>
using namespace std;
class student{
        public:
                string nm;
                int cls;
                char s;
                int math_marks;
                int eng_marks;

};
            void rev(student *a, int n )
            {
                int i=0; int j=n-1;
                while(i<j)
             {
        
                 student tmp;
                 tmp=a[i];
                 a[i]=a[j];
                 a[j]=tmp;
                i++;
                j--;
        
             }
                for(int i=0;i<n;i++)
            {
        
                 cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
        
            }
            }

int main()
{
    int n;
    cin>>n;
    student a[n];
    int i;
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
        
    }

    rev(a ,n);
    //     for(int i=0;i<n;i++)
    // {
        
    //     cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
        
    // }
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    // }
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    return 0;
}