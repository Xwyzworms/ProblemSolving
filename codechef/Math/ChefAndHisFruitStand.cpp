#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x, y;
        std::cin>>x>>y;
        if((x / 2) > y ) std::cout<<y<<std::endl;
        else std::cout<<x/2<<std::endl;
    } 

    return 0;
}
