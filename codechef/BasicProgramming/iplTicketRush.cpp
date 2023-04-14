#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,m;
        std::cin>>n>>m;
        if(m > n) 
        {
            std::cout<<0<<std::endl;
        }
        else 
        {

            std::cout<<std::abs(n-m)<<std::endl;
        }
    }
    return 0;
}