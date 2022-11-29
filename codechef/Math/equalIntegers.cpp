#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0)
    {
        int x,y;
        std::cin>>x>>y; 
        if(x == y) 
        {
            std::cout<<0<<std::endl;
        }
        else if(x < y)
        {
            std::cout<<y-x<<std::endl;
        }
        else {
            if((x-y) % 2 == 0) std::cout<<(x-y)/2<<std::endl;
            else {
                x++;
                std::cout<<((x-y) / 2) + 1<<std::endl;
            }
        }
        t--;

    }
    return 0;
}
