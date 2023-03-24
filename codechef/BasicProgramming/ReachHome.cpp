#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        if(x*5 >= y) 
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
