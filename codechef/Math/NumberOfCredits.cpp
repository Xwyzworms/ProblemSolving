#include<iostream>

int main () 
{
    int t;
    int rtp = 4;
    int audit = 2;
    std::cin>>t;
    while(t > 0 ) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        std::cout<<x * rtp + y *audit<<std::endl;
        t--;
    }
    return 0;
}