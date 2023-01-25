#include<iostream>

int  main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        std::cout<<std::max(x,y)<<" "<<x+y<<std::endl;
    }
    return 0;
}
