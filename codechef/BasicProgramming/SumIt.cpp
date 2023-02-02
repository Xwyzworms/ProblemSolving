#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a+b == c) 
        {
            std::cout<<"YES\n";
        }
        else 
        {
            std::cout<<"NO\n";
        }
    }
    return 0;
}
