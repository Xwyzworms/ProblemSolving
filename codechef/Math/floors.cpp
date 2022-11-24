#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        double x,y;
        std::cin>>x>>y;
        int fx = std::ceil(x / 10.0);
        if(fx == 0) fx ++;
        int fy = std::ceil(y / 10.0);
        std::cout<<std::abs(fx-fy)<<std::endl;
        t--;
    }
    return 0;
}