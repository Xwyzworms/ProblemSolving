#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y, nInfected;
        std::cin>>x>>y;
        nInfected =std::abs( x - y);
        if(nInfected < y) std::cout<<nInfected<<std::endl;
        else std::cout<<y<<std::endl;
    }
    return 0;
}
