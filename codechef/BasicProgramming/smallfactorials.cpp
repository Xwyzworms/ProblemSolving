#include<iostream>

int solve(int n) 
{
    int ans {1};
    while(n > 0) 
    {
        ans *= n;
        n--;
    }
    return ans;
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