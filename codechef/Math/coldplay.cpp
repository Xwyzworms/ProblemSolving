#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y;
        std::cin>>x>>y;
        std::cout<<std::floor(x/y)<<std::endl;
        t--;
    }
    return 0;
}
