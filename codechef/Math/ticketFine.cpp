#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,q,p;
        std::cin>>x>>q>>p;
        std::cout<< x * ( q - p) <<std::endl;
        t--;
    }
    return 0;
}