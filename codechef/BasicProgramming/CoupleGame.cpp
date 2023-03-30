#include<iostream>

int main() 
{
 
    int t;
    std::cin>>t;
    while(t--) 
    {
        int g,b;
        std::cin>>g>>b;
        std::cout<<std::abs(b-std::min(g,b))<<std::endl;
    }
    return 0;
}
