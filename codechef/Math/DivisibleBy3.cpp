#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y;
        std::cin>>x>>y;
        if(x % 3 ==0 || y % 3 == 0) std::cout<<"0"<<std::endl;
        else if ( x == y ) std::cout<<1<<std::endl;
        else if(std::abs(x - y) % 3 == 0) std::cout<<1<<std::endl;
        else std::cout<<2<<std::endl;
        t--;
    }
    return 0;
}