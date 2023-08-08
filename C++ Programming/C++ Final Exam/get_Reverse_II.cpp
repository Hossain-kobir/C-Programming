#include<bits/stdc++.h>
using namespace std;
class student{
        public:
                string nm;
                int cls;
                char s;
                int id;

};
            void rev(student *a, int n )
            {
                int i=0; int j=n-1;
                while(i<j)
             {
        
                 student tmp;
                 tmp.id=a[i].id;
                 a[i].id=a[j].id;
                 a[j].id=tmp.id;
                i++;
                j--;
        
             }
                for(int i=0;i<n;i++)
            {
        
                 cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
                //cout<<a;
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
        
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
        
    }

    rev(a , n);

    return 0;
}