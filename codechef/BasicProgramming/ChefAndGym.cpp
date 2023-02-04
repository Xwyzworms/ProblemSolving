#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        if(x + y <= z) 
        {
            std::cout<<"2\n";
        }
        else if(x <= z) 
        {
            std::cout<<"1\n";
        }
        else std::cout<<"0\n";
    }
    return 0;
}
