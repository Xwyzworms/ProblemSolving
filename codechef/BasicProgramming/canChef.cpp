#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        x = 15 * x;
        y = 2*y;
        if(x >= y )
        {
            std::cout<<"YES"<<std::endl;
        }
        else 
        {
            std::cout<<"NO"<<std::endl;
        }
    }
    return 0;
}