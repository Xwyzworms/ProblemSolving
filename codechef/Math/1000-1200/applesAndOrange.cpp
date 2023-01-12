#include<iostream>

int gcd(int a, int b) 
{
    int ans = b == 0 ? a : gcd(b , a %b);
    std::cout<<ans<<std::endl;
    return ans;
}
int main ()  
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,m;
        std::cin>>n>>m;
        std::cout<< gcd(m,n)<<std::endl;
    }
    return 0;
}
