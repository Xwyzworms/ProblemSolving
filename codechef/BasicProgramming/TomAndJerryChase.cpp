#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        if(y > x) 
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
