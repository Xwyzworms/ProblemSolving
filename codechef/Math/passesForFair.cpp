#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y;
        std::cin>>x>>y;
        if(x + 1<=y )std::cout<<"yes"<<std::endl;
        else
        std::cout<<"NO"<<std::endl;
        t--;
    }   
    return 0;
}