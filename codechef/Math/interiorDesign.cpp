#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )
    {
        int x1,x2,x3,x4;
        std::cin>>x1>>x2>>x3>>x4;
        std::cout<<std::min(x1 +x2, x3 + x4)<<std::endl;
        t--;
    }
    return 0;
}