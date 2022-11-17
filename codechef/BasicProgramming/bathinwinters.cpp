#include<iostream>
#include<cmath>
int solve(int p1, int p2) 
{
    int ans {0};
    int mul = p2 * 2;
    if(p1 >= p2) 
    {
        return std::floor((double) p1 / (double) mul);
    }
    else 
    {
        return 0;
    }
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1,p2)<<std::endl;
        t--;
    }
    return 0;
}