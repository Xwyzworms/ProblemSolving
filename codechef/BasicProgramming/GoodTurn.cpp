#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        if(x+y > 6) 
        {
            std::cout<<"Yes"<<std::endl;
        }
        else 
        {
            std::cout<<"No"<<std::endl;
        }
    }
}
