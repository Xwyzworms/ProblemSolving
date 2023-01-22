#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int r1,r2,r3;
        std::cin>>r1>>r2>>r3;
        if(r1 > r2+r3 || r2 > r1+r3 || r3 > r2+r1) 
        {
            std::cout<<"Yes\n";
        }
        else 
        {
            std::cout<<"No\n";
        }

    }
    return 0;
}
