#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,h;
        std::cin>>x>>h;
        std::cout<<(x>=h ? "YES\n" : "NO\n");
    }
    return 0;
}
