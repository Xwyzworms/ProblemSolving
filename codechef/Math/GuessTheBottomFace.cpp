#include<iostream>
int main() 
{

    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        std::cout<<std::abs(7-x)<<std::endl;
        t--;
    }
    return 0;
}