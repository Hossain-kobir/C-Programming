#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
        char name[100];
        int roll;
        int clas;
        char section;

        student(int r,int s,int c,char* n)
        {
             roll=r;
            section=s;
            clas=c;
            strcpy(name,n);
        }
};

int main()
{
   student kabir(10,'A',9,"Hossain Kobir");
   student hk(9,'B',8,"kabir Second ");


    cout<<kabir.name<<endl<<kabir.clas<<endl<<kabir.roll<<endl<<kabir.section<<endl;
    cout<<hk.name<<endl<<hk.clas<<endl<<hk.roll<<endl<<hk.section<<endl;
 return 0;
}
