#include<iostream>
#include<cmath>

int main() 
{   
    int t, maxVal, minVal;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        std::cout<<std::max(std::max(x,y),z) - std::min(std::min(x,y),z)<<std::endl;
        t--;
    }
    return 0;
}