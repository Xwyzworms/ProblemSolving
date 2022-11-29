#include<iostream>
#include<cmath>
int main () 
{

    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        int divisor = std::ceil((double)x / 4.0);
        std::cout<<divisor<<std::endl;
        t--;
    }
    return 0;
}