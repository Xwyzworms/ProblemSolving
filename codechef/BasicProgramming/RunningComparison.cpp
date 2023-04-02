#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        float a[n];
        for(int i = 0 ; i < n; i++) 
        {
            std::cin>>a[i];
        }
        int ans {0};
        for(int j = 0 ; j < n ;j++) 
        {
            float temp;
            std::cin>>temp;
            if(std::max(a[j],temp) / std::min(a[j],temp) <= 2) ans++;
        }

        std::cout<<ans<<std::endl;

    }
    return 0;
}
