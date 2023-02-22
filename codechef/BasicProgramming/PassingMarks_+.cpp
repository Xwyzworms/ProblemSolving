#include<iostream>
#include<algorithm>

// https://www.codechef.com/problems/CUTOFF
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x;
        std::cin>>n>>x;
        int a[n];
        
        for (int i =0 ; i < n;i++) 
        {
            std::cin>>a[i];
        }
        
        std::sort(a, a+sizeof(a) / sizeof(a[0]));
        int diff=n-x;
        if(diff == 0) 
        {
            std::cout<<a[0] - 1<<std::endl;
        }
        else if(diff > 0) 
        {
            std::cout<<a[diff] - 1 <<std::endl;
        }

    }
    return 0;
}
