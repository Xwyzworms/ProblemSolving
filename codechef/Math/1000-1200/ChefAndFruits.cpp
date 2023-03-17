#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,m,k;
        std::cin>>n>>m>>k;
        
        int diff = std::abs(n-m);
        if(n < m && diff <=k ) 
        {
            std::cout<<std::abs(n+diff - m)<<std::endl;
        }
        else if(m < n && diff <= k)
        {
            std::cout<<std::abs(m+diff - n)<<std::endl;
        }
        else if(m < n && diff > k) 
        {
            std::cout<<std::abs(m+k -n)<<std::endl;
        }
        else 
        {
            std::cout<<std::abs(n + k - m)<<std::endl;
        }

    }
    return 0;
}
