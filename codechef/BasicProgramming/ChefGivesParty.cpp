#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x,k;
        std::cin>>n>>x>>k;
        if((n) * x <= k) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
    return 0 ;
}
