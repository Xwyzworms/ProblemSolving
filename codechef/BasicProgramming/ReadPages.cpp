#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x,y;
        std::cin>>n>>x>>y;
        if(x*y>=n) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
}
