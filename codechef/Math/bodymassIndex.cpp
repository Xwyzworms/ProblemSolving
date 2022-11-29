#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while( t > 0) 
    {

        int m, h;
        std::cin>>m>>h;
        int bmi = m / std::pow(h,2);
        if(bmi <= 18) 
        {
            std::cout<<1<<std::endl;
        }
        else if(bmi > 18 && bmi <= 24) 
        {

            std::cout<<2<<std::endl;
        }
        else if(bmi > 24 && bmi <= 29) 
        {

            std::cout<<3<<std::endl;
        }
        else 
        {

            std::cout<<4<<std::endl;
        }
        t--;
    }
    return 0;
}
