#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        if(x % 4 == 0) std::cout<<"GOOD"<<std::endl;
        else std::cout<<"NOT GOOD"<<std::endl;
        t--;
    }
    return 0;
}