#include<iostream>

int main() 
{
    long long int jacket, sockCost, money;
    std::cin>>jacket>>sockCost>>money;
    money -= jacket;
    if( money/sockCost % 2 == 1) 
    {
        std::cout<<"Unlucky Chef\n";

    }else 
    {
        std::cout<<"Lucky Chef\n";
    }
    return 0;
}
