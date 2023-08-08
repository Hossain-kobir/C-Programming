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

    student Ali;
    char nm2[100]="Hanif Ali";
    strcpy(Ali.name,nm2);
    Ali.clas=9;
    Ali.roll=99;
    Ali.section='B';
    cout<<Ali.name<<endl<<Ali.clas<<endl<<Ali.roll<<endl<<Ali.section<<endl;
 return 0;
}
