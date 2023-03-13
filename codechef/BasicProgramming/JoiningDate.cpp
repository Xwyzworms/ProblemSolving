#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float k, n;
        std::cin>>k>>n;
        std::cout<< std::ceil(k / 5.0) - std::ceil(n/5.0)<<std::endl;
    }
    return 0;
}
