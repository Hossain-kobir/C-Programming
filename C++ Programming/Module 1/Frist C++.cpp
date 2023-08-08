#include<iostream>
int main()
{
    int a;
    std::cin>>a;
    switch(a%2)
    {
    case 0:
     std::cout<<"even"<<std::endl;
      break;
     default:
     std::cout<<"odd"<<std::endl;

     }
    return 0;

}
