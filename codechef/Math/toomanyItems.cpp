#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        int modulo = x % 10;
        int ans = x / 10;
        if(modulo != 0)   ans++;
        std::cout<<ans<<std::endl;
        t--;
    }
    return 0;
}