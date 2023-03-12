#include<iostream>
#include<cmath>


int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float t1,t2,r1,r2;
        std::cin>>t1>>t2>>r1>>r2;
        float lp1 = std::pow(t1,2) / std::pow(r1,3);
        float lp2 = std::pow(t2,2) / std::pow(r2,3);
        if(lp1 == lp2) 
        {
            std::cout<<"Yes\n";
        }
        else
        {
            std::cout<<"No\n";
        }
    }
    return 0;
}
