#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,d;
        std::cin>>x>>y>>d;
        int diff = std::abs(x-y);
        if(diff <=d) 
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
