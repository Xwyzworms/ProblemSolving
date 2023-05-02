#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        long long int x,y;
        std::cin>>x>>y;
        if(x*x == 2*y) 
        {
            std::cout<<"YES\n";
        }else 
        {
            std::cout<<"NO\n";
        }
    }
    return 0;
}