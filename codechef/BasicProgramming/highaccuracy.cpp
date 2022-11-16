#include<iostream>

int solve(int n) 
{
    int currn = n;
    if(n % 3 == 0) 
    {
        return 0;
    }
    else 
    {
        n = n / 3;
        n++;

    }
    int x = n * 3;
    return abs(x - currn);
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