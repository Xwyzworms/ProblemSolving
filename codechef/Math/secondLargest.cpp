#include<iostream>


int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int max = std::max(std::max(x,y),z);
        if(max == x) 
        {
            std::cout<<std::max(y,z)<<std::endl;
        }
        else if (max == y) 
        {

            std::cout<<std::max(x,z)<<std::endl;
        }
        else 
        {
            std::cout<<std::max(x,y)<<std::endl;

        }
        t--;
    }
    return 0;
}