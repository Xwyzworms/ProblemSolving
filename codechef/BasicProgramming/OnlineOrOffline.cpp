#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float x1,x2;
        std::cin>>x1>>x2;
        if(x1 - (x1* 10 / 100 ) < x2 ) 
        {
            std::cout<<"ONLINE\n";   
        }
        else if(  x1 - (x1*10/100)  > x2)
        {
            std::cout<<"DINING\n";
        }
        else 
        {
            std::cout<<"EITHER\n";
        }
    }
}