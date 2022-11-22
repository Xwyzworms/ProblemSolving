#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int ch;
        int cn;
        std::cin>>ch>>cn;
        int calCh = 2 * ch;
        int calCn = 5 * cn;
        if(calCh == calCn ) std::cout<<"Either"<<std::endl;
        else if(calCh > calCn) std::cout<<"Chocolate"<<std::endl;
        else std::cout<<"Candy"<<std::endl;
        t--;
    }
    return 0; 
}