#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 ) 
    {
        int x,y;
        std::cin>>x>>y;
        if( (x+y) % 2 == 0) std::cout<<"Janmansh"<<std::endl;
        else std::cout<<"Jay"<<std::endl;
        t--;
    }
    return 0;
}