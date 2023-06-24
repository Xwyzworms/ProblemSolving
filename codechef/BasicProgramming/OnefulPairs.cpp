#include<iostream>

int main() 
{
    int x1,x2;
    std::cin>>x1>>x2;
    int ans = x1 + x2 + ( x2 * x1 );
    if(ans == 111) 
    {
        std::cout<<"Yes\n";
    }
    else 
    {
        std::cout<<"No\n";
    } 
}