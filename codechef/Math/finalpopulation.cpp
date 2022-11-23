#include<iostream>

int main() 
{   
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        std::cout<<x-y+z<<std::endl;
        t--;
    }

    return 0;
}