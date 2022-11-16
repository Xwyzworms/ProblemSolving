#include<iostream>

int solve(int n) 
{
    int totalCoins = 50 * n;
    int sugarcane = totalCoins * 20 / 100;
    int salt_mint = totalCoins * 20 / 100;
    int shopRent = totalCoins * 30 / 100;

    return totalCoins - (sugarcane + salt_mint + shopRent);
}

int main() 
{
    int t ;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
        t--;
    }
    return 0 ;
}