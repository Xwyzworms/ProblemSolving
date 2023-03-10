#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,k;
        std::cin>>n>>k;
        k = k*(k+1) / 2;
        if(n>=k) 
        {
            std::cout<<"YES\n";
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
    return 0;
}
