#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        if(x >= 1 && x <= 4) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        t--;
    }
    return 0;
}