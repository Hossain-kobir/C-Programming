#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
        char name[100];
        float height;
        int age;

        Person(char* n,float h,int a)
        {
            strcpy(name,n);
             height=h;
             age =a;

        }

};
Person fun( )
{
    Person kabir("Md Hossain Kobir",5.5,8);
    return kabir;

}
Person fun1( )
{

    Person siddik("Kobir siddik",6.5,9);
    return siddik;
}
int main()
{   Person kabir =fun();
    Person siddik =fun1();
    if(siddik.age>kabir.age)
    {
        cout<<siddik.name<<endl;
    }
    else
    {
        cout<<kabir.name<<endl;
    }

    return 0;
}
