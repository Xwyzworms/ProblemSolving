#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int m, a, b;
        std::cin>>a>>b>>m;

        int abs = std::abs(a-b);
        if(std::abs(abs-m) < abs)  
        {
            std::cout<<std::abs(abs-m)<<std::endl;
        }
        else 
        {
            std::cout<<abs<<std::endl;;
        }


    }
    return 0;
}
