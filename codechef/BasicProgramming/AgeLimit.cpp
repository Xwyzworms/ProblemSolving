#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,a;
        std::cin>>x>>y>>a;
        if(a>=x && a<y)
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
