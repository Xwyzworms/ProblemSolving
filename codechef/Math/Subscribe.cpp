#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int a, b;
        std::cin>>a>>b;
        int many = std::ceil((double) a / 6);
        std::cout<<many* b<<std::endl;
        t--;
    }

    return 0;
}