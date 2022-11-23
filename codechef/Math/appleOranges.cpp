#include<iostream>

int main() 
{
    int x,y,z;
    std::cin>>x;
    std::cin>>y>>z;
    if( x - (y + z) >= 0 ) std::cout<<"yes"<<std::endl;
    else std::cout<<"No"<<std::endl;
}