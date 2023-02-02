#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        if((x > y && x < z) || (x > z && x<y)) 
        {
            std::cout<<x<<std::endl;
        } 
        else if((y>x && y < z) || (y > z && y < x )) 
        {
            std::cout<<y<<std::endl;
        }
        else  
        {
            std::cout<<z<<std::endl;
        }
    }
}
