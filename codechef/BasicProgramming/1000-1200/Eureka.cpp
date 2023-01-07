#include<iostream>
#include<cmath>
int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        std::cout<<std::round(std::pow(0.143*x,x))<<std::endl;
    }
    return  0;
}
