#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        if((n%7) % 2 != 0 && n < 7) std::cout<<"NO\n";
        else std::cout<<"YES\n";
    }
}
