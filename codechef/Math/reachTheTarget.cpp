#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int xx,xxx; 
        std::cin>>xx>>xxx;
        std::cout<<xx-xxx<<std::endl;
        t--;
    }
    return 0; 
}