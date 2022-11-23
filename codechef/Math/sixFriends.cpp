#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y;
        std::cin>>x>>y;
        std::cout<<std::min(3* x , 2 * y)<<std::endl;
        t--;
    }

    return 0;
}