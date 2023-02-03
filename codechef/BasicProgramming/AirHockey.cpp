#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b;
        std::cin>>a>>b;
        std::cout<<7 - std::max(a,b)<<std::endl;
    }
    return 0;
}
