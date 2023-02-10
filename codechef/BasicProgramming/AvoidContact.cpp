#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        if(x == y) 
        {
            std::cout<<y*2 -1 <<std::endl;
        }
        else 
        {
            int reserveRooms = 2*y;
            std::cout<<reserveRooms + std::abs(x-y)<<std::endl;;
        }

    }
    return 0;
}
