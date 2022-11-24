#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int minVal = std::min(std::min(x,y),z);
        std::cout<<x+y+z-minVal<<std::endl;
        t--;
    }
    return 0;
}