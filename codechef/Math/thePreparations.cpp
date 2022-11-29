#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int m, n, k;
        std::cin>>m>>n>>k;

        int total = n * k ;
        if(total < m) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;

        t--;
    }
    return 0;
}
