#include<iostream>
#include<cmath>
int solve(int p1, int p2) 
{
    return std::ceil((double) p1/ (double)p2);
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int t1,t2;
        std::cin>>t1>>t2;
        std::cout<<solve(t1,t2)<<std::endl;
        t--;
    }

    return 0;
}