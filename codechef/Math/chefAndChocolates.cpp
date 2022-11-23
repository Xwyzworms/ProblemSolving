#include<iostream> 

int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int absx = std::abs(x-y);
        std::cout<<absx*z<<std::endl;
        t--;
    }
}