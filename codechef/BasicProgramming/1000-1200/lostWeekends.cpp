#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int a1,a2,a3,a4,a5,p;
        int hour24 = 24*5;
        std::cin>>a1>>a2>>a3>>a4>>a5>>p;
        a1*=p;
        a2*=p;
        a3*=p;
        a4*=p;
        a5*=p;
        
        if(a1 + a2 + a3 + a4 + a5 <= hour24) std::cout<<"No"<<std::endl;
        else std::cout<<"Yes"<<std::endl;
        t--;
    }
    return 0;
}
