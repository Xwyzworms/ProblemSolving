#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int ans = 0;
        for(int i =0 ; i < n ;i++) 
        {
            int s,j;
            std::cin>>s>>j;
            if(std::abs(s-j) > 5) 
            {
                ans++;
            } 
        }
        std::cout<<ans<<std::endl;
        
    }
    return 0;
}
