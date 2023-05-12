#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t--)  
    {
        int n,x;
        std::cin>>n>>x;
        if(x*2 >= n) 
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