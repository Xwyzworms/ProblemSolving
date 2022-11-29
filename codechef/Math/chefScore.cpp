#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n,x,y;
        std::cin>>n>>x>>y;
        if( y % x == 0) 
        {
            int mult = x * n;
            if(mult >= y) std::cout<<"YES"<<std::endl;
            else std::cout<<"NO"<<std::endl;

        }
        else 
        {
            std::cout<<"NO"<<std::endl;
        }
        t--;
    }
    return 0; 
}