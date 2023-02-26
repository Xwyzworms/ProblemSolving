#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        int maxA = std::max(a, std::max(b,c));
        int sumOfShit = a + b + c - maxA;
        if(sumOfShit  == maxA)
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
