#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        std::cout<<x * 2 <<std::endl;
        t--;
    }
    return 0;
}