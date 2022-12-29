#include<iostream>

int main() 
{   int t;
    std::cin>>t;
    while(t--)
    {
        long long x,i{1}, ans{0};
        std::cin>>x;
        while((x - i) >= 0) 
        {
            x-=i;
            i++;
            ans++;
        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}
