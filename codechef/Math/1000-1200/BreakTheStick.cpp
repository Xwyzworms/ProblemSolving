#include<iostream>
#include<cmath>
int main() 
{
 
    int t;
    std::cin>>t;
    while(t--) 
    {
        long long int n,x;
        std::cin>>n>>x;

        if(n % x == 0 ) std::cout<<"YES\n";
        else if((n % 2 == 0 && x % 2 == 0) || x % 2 == 1) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
    return 0;

}
