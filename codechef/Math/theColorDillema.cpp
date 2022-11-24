#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y;
        std::cin>>x>>y;
        int div = std::floor(y / x);
        if( y > x && y % x != 0 )
        std::cout<<y/x<<std::endl;
        else if(y > x && y % x ==0) 
        std::cout<<(y/x)-1<<std::endl;
        else std::cout<<0<<std::endl;
        t--;
    }
    return 0;
}