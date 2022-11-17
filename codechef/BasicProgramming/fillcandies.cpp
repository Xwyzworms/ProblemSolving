#include<iostream>
#include<cmath>
int solve(int n, int k, int m) 
{
    int totalHolder = k * m;
    return std::ceil((double) n / (double)totalHolder);
}

int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1, p2, p3;
        std::cin>>p1>>p2>>p3;
        std::cout<<solve(p1,p2,p3)<<std::endl;
        t--;
    }
    return 0;
}