#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        if(y-x < 0)  std::cout<<"LOSS\n";
        else if(y-x>0) std::cout<<"PROFIT\n";
        else std::cout<<"NEUTRAL\n";
    }
}
