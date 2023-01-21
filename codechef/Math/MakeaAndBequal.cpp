#include<iostream>
#include<cmath>
int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b;
        std::cin>>a>>b;
        if(a == b) 
        {
            std::cout<<"YES\n";
        }
        else 
        {
            int baseLog2 = round(std::log2(std::max(a,b) / std::min(a,b)));
            if(std::pow(2,baseLog2) *std::min(a,b) == std::max(a,b)) 
            {
                std::cout<<"YES\n";
            }
            else 
            {

                std::cout<<"NO\n";
            }
        }
    }
    return 0;
}
