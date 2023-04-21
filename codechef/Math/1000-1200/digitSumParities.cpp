#include<iostream>

long long int check(int s) 
{ int sum = 0;
    while(s != 0) 
    {
        sum += s % 10;
        s /= 10;
    }
    return sum;
}
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        long long int n ;
        std::cin>>n;
        
        if(check(n) %2 != check(n + 1) % 2 ) 
        {
            std::cout<<n + 1 <<std::endl;
        }
        else
        {
            std::cout<<n + 2 <<std::endl;
        }
    }
    return 0;
}
