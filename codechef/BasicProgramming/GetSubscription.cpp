#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x <=30) 
        {
            std::cout<<"NO\n";
        }
        else std::cout<<"YES\n";
    }
    return 0;
}
