#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        std::cout<<std::max(a+c,b)<<std::endl;
    }
    return 0;
}
