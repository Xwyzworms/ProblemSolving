#include<iostream>

int main() 
{
    int t, x, y ;
    std::cin>>t;
    while(t > 0) 
    {
        std::cin>>x>>y;
        if(x >= y) std::cout<<0<<std::endl;
        else std::cout<<std::abs(x-y)<<std::endl;
        t--;
    }
    return 0;
}