#include<iostream>

int main( ) 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        int y;
        std::cin>>x>>y;
        int xTotal = x*5;
        int yTotal = y*2 + x;
        if(xTotal < yTotal) 
        {
            std::cout<<xTotal<<std::endl;
        }
        else{
            std::cout<<yTotal<<std::endl;;
        }
    }

    return 0;
}