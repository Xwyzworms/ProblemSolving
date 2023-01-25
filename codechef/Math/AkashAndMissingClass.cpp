#include<iostream>
#include<cmath>


int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int ans = n / 7 ;
        if(n % 7 >= 6) 
        {
            ans ++;
        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}
