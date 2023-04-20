#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n, m;
        std::cin>>n>>m;
        if(m*6*6 >= n) 
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