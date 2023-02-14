#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int a[n];
        for(int i =0 ; i< n ;i++)
        {
            std::cin>>a[i];
        }
        int ans=1;
        for(int i =0 ; i<n-1 ;  i++) 
        {
            if(a[i] != a[i+1]) 
            {
                ans++;
            }
        }
        std::cout<<ans<<std::endl;
    
    }

    return 0;
}
