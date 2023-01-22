#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,m;
        std::cin>>x>>y>>m;
        int rentCooler = x * m ;
        
        if(rentCooler < y) 
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
