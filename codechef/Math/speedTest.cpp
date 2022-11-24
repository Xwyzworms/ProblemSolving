#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        float a,x,b,y;
        std::cin>>a>>x>>b>>y;
        if( a / x == b / y) std::cout<<"equal"<<std::endl;
        else if(a / x > b/y) std::cout<<"alice"<<std::endl;
        else std::cout<<"bob"<<std::endl;
        t--;
    }
    return 0;
}