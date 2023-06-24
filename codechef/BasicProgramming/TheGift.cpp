#include<iostream>

int main() 
{

    int x,n,m;
    std::cin>>x>>n>>m;
    if(x + m < n) 
    {
        std::cout<<"no\n";
    }
    else 
    {
        std::cout<<"yes\n";
    }
    return 0;
}