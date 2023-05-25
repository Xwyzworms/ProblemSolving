#include<iostream>


int main() 
{
    int x,y,h;
    std::cin>>x>>y>>h;
    std::cout<<std::abs(y*(h-1) + x)<<std::endl;
    return 0;
}