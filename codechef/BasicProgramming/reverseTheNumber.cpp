#include<iostream>

int solve(int n) 
{
    int ans {0};
    while(n > 0) 
    {
        int tempModulo = n % 10;
        ans = ans * 10 + tempModulo;
        n = n/10;
    }
    return ans;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int ans{0};
        std::cin>>ans;
        std::cout<<solve(ans)<<std::endl;
        t--;
    }
    return 0;
}