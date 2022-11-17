#include<iostream>
#include<cmath>
int solve(int n) 
{
    return std::sqrt(n);
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1;
        std::cin>>p1;
        std::cout<<solve(p1)<<std::endl;
        t--;
    }
    return 0; 
}