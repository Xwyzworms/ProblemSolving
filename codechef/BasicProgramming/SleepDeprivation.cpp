#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x < 7) 
        {
            std::cout<<"Yes\n";
        }
        else std::cout<<"No\n";
    }
    return 0;
}
