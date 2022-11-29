#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y,k;
        std::cin>>x>>y>>k;
        if(x % k == 0 && y % k == 0) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        t--;
    }
    return 0;
}