#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,k;
        std::cin>>n>>k;
        if(n%k == 0 && n%k == n) 
        {
         std::cout<<n/k<<std::endl;
        }
        else if(n%k != 0 ) 
        {
            std::cout<< -1<<std::endl;
        }
        else 
        {
         std::cout<<n/k<<std::endl;
        };
    }
    return 0;
}
