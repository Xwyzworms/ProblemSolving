#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        char a,b,c;
        std::cin>>a>>b>>c;
        char x,y;
        std::cin>>x>>y;
        if(a == x || a == y) 
        {
            std::cout<<a<<std::endl;
        }
        else if(b == x || b == y) 
        {
            std::cout<<b<<std::endl;
        }

    }
    return 0;
}
