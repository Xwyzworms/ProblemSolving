#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,x;
        std::cin>>a>>b>>x;
        if(a == b) std::cout<<"YES\n";
        else if(std::abs(a - b)%(x*2) == 0) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
    return 0;
    
}
