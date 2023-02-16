#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a >= b && a >= c) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }   
    return 0;
}
