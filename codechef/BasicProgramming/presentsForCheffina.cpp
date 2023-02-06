#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int freeGifts = n / 5;
        std::cout<<n-freeGifts<<std::endl;
    }
    return 0;
}
