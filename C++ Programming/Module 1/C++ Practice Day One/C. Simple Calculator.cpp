#include<iostream>
using namespace std;
int main()
{
    int x,y,summation,multiplication,subtraction;
    cin>>x>>y;
    summation = x+y;
    multiplication = x*y;
    subtraction = x-y;
    cout<< x <<" + "<< y <<" = "<< summation <<endl;
    cout<< x <<" * "<< y <<" = "<< multiplication <<endl;
    cout<< x <<" - "<< y <<" = "<< subtraction <<endl;

    return 0;
}
