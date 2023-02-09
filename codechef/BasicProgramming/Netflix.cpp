#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,x;
        std::cin>>a>>b>>c>>x;
        if(a+b >=x || b+c >= x || a+c >= x )
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
