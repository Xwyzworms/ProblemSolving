#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x,y;
        std::cin>>n>>x>>y;
        int totalCanBeCarried = (n+1) * y;
        if(x - totalCanBeCarried <= 0) {
            std::cout<<"YES\n";
        }
        else 
        {
            std::cout<<"NO\n";
        }


    }
    return 0;
}
