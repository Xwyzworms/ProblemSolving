#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b;
        std::cin>>a>>b;
        int diff = std::abs(a-b);
        if(diff % 2 == 0) 
        {
            std::cout<<"Yes\n";
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
    return 0;
}
