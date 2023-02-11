#include<iostream>
//https://www.codechef.com/problems/PRICECON
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,k, ans=0;
        std::cin>>n>>k;
        for(int i =0 ; i<n; i++) 
        {
            int temp;
            std::cin>>temp;
            if(temp > k) ans+= std::abs(temp - k);
        }

        std::cout<<ans<<std::endl;
    }
    return 0;
}
