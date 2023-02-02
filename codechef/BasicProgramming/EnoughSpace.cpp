#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x,y;
        std::cin>>n>>x>>y;
        int xSpace = x * 1;
        int ySpace = y * 2;
        int sumSpace = xSpace + ySpace;
        
        if(sumSpace <= n) 
        {
            std::cout<<"YES\n";
        }
        else std::cout<<"NO\n";
    }
    return 0;
}
