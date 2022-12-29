#include<iostream>

int main ()
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        std::cout<<y%(x+1)<<std::endl;
    }
    return 0;
} 

