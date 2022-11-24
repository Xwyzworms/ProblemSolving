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
        int sum = x+y;
        if((int)std::floor((double)sum / 2.0 ) % 2 != 0) std::cout<<"bob"<<std::endl;
        else std::cout<<"alice"<<std::endl;
        t--;
    }

    return 0; 
}