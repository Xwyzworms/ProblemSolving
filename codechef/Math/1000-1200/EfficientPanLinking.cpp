#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        boost::multiprecision::int1024_t n;
        std::cin>>n;
        std::cout<<n - (20*(n / 20)) <<std::endl;
    }
    return 0;
}