#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        std::cout<<((x > y ? "A\n" : "B\n"));
    }
        return 0;
}
