#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
     int n,k;
     std::cin>>n>>k;
     if(n % k != 0) 
     {
        std::cout<<(n/k) + 1<<std::endl;
     }
     else 
     {
        std::cout<<(n/k)<<std::endl;
     }
        

    }
    return 0;
}
