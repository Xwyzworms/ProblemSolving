#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        int modl = x % 10;
        std::cout<<modl<<std::endl;
        t--;
    }
    return 0;
}