#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x1,x2;
        std::cin>>x1>>x2;
        if(x1 == x2) 
        {
            std::cout<<"Yes\n";
        }
        else if(x1 < x2 ) 
        {
            std::cout<<"No\n";
        }
        else 
        {
            std::cout<<"Yes\n";
        }

    }
    
    return 0;
}
