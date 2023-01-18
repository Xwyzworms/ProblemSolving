#include<iostream>

int main() 
{
    int n1,n2;
    std::cin>>n1>>n2;
    int diff = std::abs(n1-n2);
    if(n1 > n2 ) 
    {
        std::cout<<diff<<std::endl;
    }
    else 
    {
        std::cout<<n1+n2<<std::endl;
    }
    return 0;
}
