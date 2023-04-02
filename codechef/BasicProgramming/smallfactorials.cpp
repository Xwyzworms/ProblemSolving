#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
cpp_int solve(cpp_int n) 
{
    if(n == 0 ) 
    {
        return 1;
    }
    return n * solve(n-1);
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int inp;
        std::cin>>inp;
        std::cout<<solve(inp)<<std::endl;
        t--;
    }
    return 0;
}
