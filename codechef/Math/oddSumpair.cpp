#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while( t > 0) 
    {
        int x, y, z;
        std::cin>>x>>y>>z;
        if( (x % 2 == 0 && y % 2 == 0 && z % 2 == 0) || ( y % 2 == 1 && x % 2 == 1 && z % 2 == 1 ) ) std::cout<<"NO"<<std::endl;
        else std::cout<<"Yes"<<std::endl;
        t--;
    }
    return 0;
}