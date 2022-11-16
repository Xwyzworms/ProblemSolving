#include<iostream>

int getDiscount(int money) 
{
    int discount{0};
    if(money > 100 && money <= 1000) discount = 25;
    else if(money > 1000 && money <= 5000) discount = 100;
    else if(money > 5000) discount=500;
    return discount;
}
int solve(int x ) 
{
    int theDiscount = getDiscount(x);
    return x - theDiscount;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int val;
        std::cin>>val;
        std::cout<<solve(val)<<std::endl;
        t --;
    }
    return 0;
}
