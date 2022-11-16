#include<iostream>
#include<cmath>

int solve(int x1, int x2) 
{
    int total = x1 * x2;
    int divi = std::floor(total / 100);
    return divi;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x1,x2;
        std::cin>>x1>>x2;
        std::cout<<solve(x1,x2)<<std::endl;
        t--;
    }
    return 0;
}