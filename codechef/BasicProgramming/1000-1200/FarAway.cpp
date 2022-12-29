#include<iostream>

int main() 
{

    int tc;
    std::cin>>tc;
    while(tc--) 
    {
        long long int n,m,ans{0};
        std::cin>>n>>m;
        int x1, x2;
        while(n--) 
        {
            int temp;
            std::cin>>temp;
            x1 = std::abs(temp - 2);
            x2 = std::abs(temp - m-1);
            if(x1 > x2) ans+=x1;
            else ans+= x2;

        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}
