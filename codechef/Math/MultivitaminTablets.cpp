#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        int totalTablets = y/3;
        if(totalTablets >=x ) 
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
