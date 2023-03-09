#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float h,x,y;
        std::cin>>h>>x>>y;
        int sum = h - y;
        if(sum <= 0 ) 
        {
            std::cout<<1<<std::endl;
        }
        else
        {
            int rounded = std::ceil(sum / x) ;
            std::cout<<rounded + 1 <<std::endl;
        }

    }
    return 0;
}
