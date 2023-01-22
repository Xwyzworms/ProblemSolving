#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        std::cout<<x*10 + y*5<<std::endl;
    }
    return 0;
}
