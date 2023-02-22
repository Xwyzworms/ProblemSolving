#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {   
        int x,y;
        std::cin>>x>>y;
        if(y>x) 
        {
            int extraChocolate = y-x;
            std::cout<< extraChocolate*2 + x<<std::endl;
        }
        else 
        {
            std::cout<<y<<std::endl;
        }

    }       
}
