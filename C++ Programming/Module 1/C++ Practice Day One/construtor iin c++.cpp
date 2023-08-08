#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
        char name[100];
        int roll;
        int clas;
        char section;
};

int main()
{
    student kabir;
    char nm[100]="Hossain Kobir";
    strcpy(kabir.name,nm);
    kabir.clas=10;
    kabir.roll=10;
    kabir.section='A';
    cout<<kabir.name<<endl<<kabir.clas<<endl<<kabir.roll<<endl<<kabir.section<<endl;
 return 0;
}
