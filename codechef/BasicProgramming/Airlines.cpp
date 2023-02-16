#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int totalSeats = x*10;
        if(totalSeats >= y) 
        {
            std::cout<<y*z<<std::endl;
        }
        else 
        {
            std::cout<<totalSeats * z<<std::endl;
        }
    }
    return 0;
}
