#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,k;
        int ans = 0;
        std::cin>>n>>k;
        for(int i= 0; i< n;i++) 
        {
            int x,y;
            std::cin>>x>>y;
            if(k > 0) 
            {
                int temp = x-k;
                k -=x;
                 x= temp;
            }
            if(x < 0) x = 0;
            ans += y*x;

        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}
