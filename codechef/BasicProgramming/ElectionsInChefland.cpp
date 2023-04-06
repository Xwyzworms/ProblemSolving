#include<iostream>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x, ans{0};
        std::cin>>n>>x;
        for(int i = 0; i < n; i ++) 
        {
            int temp;
            std::cin>>temp;
            if(temp >= x) 
            {
                ans ++;
            }
        }

        std::cout<<ans<<std::endl;
    }

    return 0;
}