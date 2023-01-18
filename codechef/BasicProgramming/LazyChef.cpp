#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,m,d;
        std::cin>>x>>m>>d;
        int min = std::min(x*m, x + d);
        std::cout<<min<<std::endl;
    }
    return 0;
}
