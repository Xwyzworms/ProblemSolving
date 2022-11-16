#include<iostream>

int solve(int n) 
{
    int ans = n * 10;
    return ans;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
        t--;
    }
    return 0;
}