#include<iostream>

int main() 
{
    int inp;
    std::cin>>inp;
    if(inp < 51) 
    {
        std::cout<<"100"<<std::endl;
    }
    else if(inp >=51 && inp < 101) 
    {
        std::cout<<"50"<<std::endl;
    }
    else 
    {
        std::cout<<"0"<<std::endl;
    }
    return 0;
}
