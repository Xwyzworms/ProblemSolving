#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;

        int base = x - y;
        int profit10p = x + ( x * 10 / 100);
        std::cout<<profit10p - base<<std::endl;
    
    }
    return 0;
}
