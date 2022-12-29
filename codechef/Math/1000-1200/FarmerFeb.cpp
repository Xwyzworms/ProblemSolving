#include<iostream>

bool prime(int n) 
{
    if(n < 2) 
    {
        return false;
    }
    else if(n == 2) 
    {
        return true;
    }
    else 
    {
        for(int i = 2; i < n; i ++) 
        {
            if(n % i == 0) return false;
        }
        return true; 
    }
}
int main () 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int x,y;
        std::cin>>x>>y;
        int sum = x + y + 1;
        while(prime(sum) != true) 
        {
            sum++;
        }
        std::cout<<sum-x-y<<std::endl;
    }   
    return 0;
}
