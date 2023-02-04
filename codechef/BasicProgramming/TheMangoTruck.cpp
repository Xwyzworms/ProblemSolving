#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int littleSpace = (y - z );
        if(littleSpace < 0) littleSpace = std::abs(littleSpace);
        else littleSpace = 0;
        std::cout<<littleSpace / x<<std::endl;
    }
    return 0;
}

