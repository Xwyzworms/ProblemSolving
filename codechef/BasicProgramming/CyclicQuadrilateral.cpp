#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        if(a+c == 180 && b+d == 180) std::cout<<"YES\n";
        else std::cout<<"No\n";
    }
    return 0;
}
