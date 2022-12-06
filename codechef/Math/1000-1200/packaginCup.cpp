#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int temp;
        std::cin>>temp;
        std::cout<<((temp / 2) + 1)<<std::endl;
        t--;
    }
    return 0;
}
