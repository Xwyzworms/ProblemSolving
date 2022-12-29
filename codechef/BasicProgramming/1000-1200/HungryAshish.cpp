#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int x, y, z;
        std::cin>>x>>y>>z;
     if( x >= y ) std::cout<<"Pizza"<<std::endl;
        else if(x >= z) std::cout<<"Burger"<<std::endl;
        else std::cout<<"Nothing"<<std::endl;
        
    }
    return 0;
}
