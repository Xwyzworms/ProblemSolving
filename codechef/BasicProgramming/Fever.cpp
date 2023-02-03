#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x > 98) 
        {
            std::cout<<"Yes\n";
        }
        else  std::cout<<"No\n";
    }
}
