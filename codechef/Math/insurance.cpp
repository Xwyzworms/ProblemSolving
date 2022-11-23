#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y;
        std::cin>>x>>y;
        if(y >= x)std::cout<<x<<std::endl;
        else std::cout<<y<<std::endl;
        t--;
    }
    return 0;
}