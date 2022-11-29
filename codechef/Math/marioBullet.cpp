#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x, y, z;
        std::cin>>x>>y>>z;
        int divisor = y / x;
        if(divisor > z) 
        {
            std::cout<<0<<std::endl;
        }
        else 
        {
            std::cout<<abs(divisor - z)<<std::endl;
        }
        t--;
    }
    return 0;
}