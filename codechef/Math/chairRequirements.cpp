#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )
    {
        int x1,x2;
        std::cin>>x1>>x2;
        if(x1 < x2) std::cout<<0<<std::endl;
        else std::cout<<std::abs(x1-x2)<<std::endl;
        t--;
    }
    return 0;
}