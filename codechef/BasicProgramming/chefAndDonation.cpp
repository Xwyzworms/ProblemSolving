#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a, b;
        std::cin>>a>>b;
        std::cout<<abs(a - b)<<std::endl;
    }
    return 0;
}