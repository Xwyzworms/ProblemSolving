#include<iostream>
long long gcd(long long int a, long long int b) 
{
    return b == 0 ? a : gcd(b, a%b);
}

long long int lcm(long long int a, long long int b) 
{
    return (a / gcd(a,b)) *b;
}
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        long long int a,b;
        std::cin>>a>>b;
        std::cout<<gcd(a,b)<<" "<<lcm(a,b)<<std::endl;
    }
    return 0;
}

