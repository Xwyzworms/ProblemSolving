#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a;
        std::cin>>a;
        int rup = a * 1000;
        int rest = rup / 2;

        std::cout<<rest / 5 <<std::endl;
    }
    return 0;
}
