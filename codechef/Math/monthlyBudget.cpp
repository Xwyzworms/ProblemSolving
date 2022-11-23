#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )
    {
        int x,y;
        std::cin>>x>>y;
        int totalDays = y * 30;
        if(x>=totalDays) std::cout<<"YEs"<<std::endl;
        else std::cout<<"no"<<std::endl;
        t--;
    }
    return 0;
}