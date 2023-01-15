#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        if( (x+y == z) || (y+z == x) ||  (x+z) == y) 
        {
            std::cout<<"YES\n";
        }
        else 
        {
            std::cout<<"NO\n";
        }
    }

        
    return 0;
}
