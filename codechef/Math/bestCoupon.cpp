#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )
    {
        int x;
        std::cin>>x;
        int DiscountPrice = x * 10 / 100;
        int flatDiscount = x - 100;
        if( DiscountPrice > 100) std::cout<<DiscountPrice<<std::endl;
        else std::cout<<100<<std::endl; 
        t--;
    } 
    return 0;
}