#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while( t > 0) 
    {
        int x;
        std::cin>>x;
        if(x < 300) std::cout<<300*10<<std::endl;
        else std::cout<<x * 10<<std::endl;
        t--;
    }
    return 0; 
}