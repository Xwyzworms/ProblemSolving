#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        if(x/y >=2) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
    return 0;
}
