#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,l,x;

        std::cin>>n>>l>>x;
        
        int r = n - l;
        int ans = std::min(r,l);
        std::cout<<ans * x <<std::endl;
    }
}
