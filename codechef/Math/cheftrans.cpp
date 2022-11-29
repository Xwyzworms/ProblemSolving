#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int sum = x + y;
        if(sum == z) std::cout<<"EQUAL"<<std::endl;
        else if(sum < z) std::cout<<"PLANEBUS"<<std::endl;
        else std::cout<<"TRAIN"<<std::endl;
        t--;
    }
    return 0;
}
