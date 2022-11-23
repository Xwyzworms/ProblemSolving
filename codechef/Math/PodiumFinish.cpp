#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int a,b;
        std::cin>>a>>b;
        std::cout<<a + b <<std::endl;
        t--;
    }
    return 0;
}