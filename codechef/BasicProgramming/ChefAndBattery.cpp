#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n, ans=0;
        std::cin>>n;
        while(n != 50)
        {
            if(n <= 50 ) 
            {
                n+=2;
            }
            else if(n > 50 ) 
            {
                n-=3;
            }
            ans++;
        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}