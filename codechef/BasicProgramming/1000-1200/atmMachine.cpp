#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n, k;
        std::cin>>n>>k;
        while(n--) 
        {
            int pullOut;
            std::cin>>pullOut;
            if( k - pullOut >= 0 )  
            {
                k -= pullOut;
                std::cout<<1;
            } 
            else 
            {
                std::cout<<0;
            }
        }
        std::cout<<std::endl;
        
    }
    return 0;
}
