#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x*4 <= 1000) 
        {
            std::cout<<"YES\n";
        }
        else {
            std::cout<<"NO\n";
        }
    }
    return 0;
}