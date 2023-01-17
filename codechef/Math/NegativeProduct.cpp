#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a, b,c ;
        std::cin>>a>>b>>c;
        if(a*b < 0 || b * c <0 || a*c < 0) 
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
