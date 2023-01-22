#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        int diff = y-x;
        if(diff % 8== 0) 
        {
        std::cout<<diff/8<<std::endl;
        }
        else 
        {
        std::cout<<(diff/8) + 1<<std::endl;
        }
    }
    return 0;
}
