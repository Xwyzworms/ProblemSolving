#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x;
        std::cin>>n>>x;
        if (n <= x) 
        {
            std::cout<<"Yes\n";
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
}