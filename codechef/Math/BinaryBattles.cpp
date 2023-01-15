#include<iostream>
#include<cmath>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,a,b;
        std::cin>>n>>a>>b;
        int totalN = std::log2(n);
        int totalBreak = totalN - 1;
        int ans = (totalN * a) + totalBreak * b;

        std::cout<<ans<<std::endl;
    }
    return 0;

}
