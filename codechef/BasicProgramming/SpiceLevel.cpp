#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x < 4) std::cout<<"MILD\n";
        else if( x >= 4 && x < 7) std::cout<<"MEDIUM\n";
        else std::cout<<"HOT\n";
    }
    return 0;
}
