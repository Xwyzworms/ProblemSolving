#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
            int x,y;

            std::cin>>x>>y;
             y *=  10;
            if(x > y) 
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
